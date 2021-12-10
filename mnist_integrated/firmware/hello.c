// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"
#include "stats_helper.c"    // Include the stats helper functions up front so they can also be used

// Defining base address for various signals/data used

#define IMG_BASE 0x30000000        // Input image data can be accessed from this address (4KB)  
#define READY    0x32000000        // Ready signal from the accelerators is written here  
#define RESET    0x31000000        // Address corresponding to reset signal 
#define IMG_ACC  0x34000000        // Used to write to the input signals of peripheral 
#define IMG_RES  0x33000000        // Used to get the output from the peripheral 
#define START_SIG 0x01             // Start signal 
#define TIMEOUT 1000           
 
// Function prototypes
void IMG_Write(int x, int m);
void IMG_StartAndWait(void);

// Set up the inputs to the accelerator
void IMG_Write(int x, int m)
{
	volatile int *p = (int *)(IMG_ACC + (4*m));
	*p = x;
}

// Do a "reset" so that the values get latched into the accelerator 
// and then wait until the signal "rdy" comes back as 1
void IMG_StartAndWait(void)
{
	volatile int *p = (int *)RESET;
	// Set the "reset" signal to 1 
	*p = START_SIG; 
    
	// Remove the reset signal.  Since each instruction anyway takes
	// multiple cycles, the reset will be high for at least one clock
	// which is enough
	*p = 0;
    
	// Keep reading back from READY and check if the LSB is set to 1. 
	// If the "rdy" signal is connected to the LSB, this should happen
	// after the forward pass is complete, shall print out incase of 
    // TIMEOUT.
    
    p = (int *)READY;
	bool rdy = false;
	int count = 0;
	while (!rdy && (count < TIMEOUT)) {
		volatile int x = (*p); // read from READY
		if ((x & 0x01) == 1) rdy = true;
		count ++;
	}
	if (count == TIMEOUT) {
		print_str("TIMED OUT: did not get a 'rdy' signal back!");
	}
}

void hello(void)
{
	
    // Writing to the input of the accelerator 
    
    int w_start = get_num_cycles();
    for(int i = 0; i<785; i++)
    {
        IMG_Write((*(int *)(IMG_BASE+(4*i))),i);
    }
    int w_end = get_num_cycles();
    print_str("Completed writing data to accelerator in ");
	print_dec(w_end - w_start);
	print_str(" cycles.\n");
    
    // Starting the accelerator 
    
    print_str("Starting the forward pass for the image.\n");
    int t_start = get_num_cycles();
	IMG_StartAndWait();
    int t_end = get_num_cycles();
    
    // End of the forward pass
    
	print_str("Completed the forward pass in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    print_str("Printing the scores in hex.\n");
    
    // Printing the results obtained from accelerator 
    
    for(int i = 0; i<10; i++)
    {
        print_str("Score_");
        print_dec(i);
        print_str(": ");
        print_hex((*(int *)(IMG_RES+(4*i))),8);        
        print_str("\n");
    }
}
