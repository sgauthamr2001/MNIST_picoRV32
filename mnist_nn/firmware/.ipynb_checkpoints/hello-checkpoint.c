// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"
#include "stats_helper.c"    // Include the stats helper functions up front so they can also be used
#include<stdio.h> 

#define NULL ((void *)0)
#define WBDBASE 0x30000000    // W, b and image data starts from here in order W1, b1, W2, b2, X. 

#define D 784           // Number of pixels in an MNIST image (28 x 28) 
#define H 32            // Number of channels of hidden layer
#define C 10            // Number of classes

/************************************************************************   

    Nueral Network architecture - 
    FC layer -> ReLU (hidden) -> FC layer (scores)
    X: Input data of shape (N, D)
    scores: Tensor of shape (N, C) giving the classification scores for X
    hidden: Tensor of shape (N, H) giving the hidden layer representation
    W1: First layer weights; has shape (D, H)
    b1: First layer biases; has shape (H,)
    W2: Second layer weights; has shape (H, C)
    b2: Second layer biases; has shape (C,)
    
*************************************************************************/
void hello(void)
{
	int *p = (int *)WBDBASE;        // p points to the start of data
    int hidden[H];                  // Stored in stack to hold hidden layer activations 
    int scores[C];                  // Stored in stack to hold final class scores 
  
    // Locations of individual weights mapped according to number of elements 
    
    int* W1 = p; 
    int* b1 = p + D*H; 
    int* W2 = p + D*H + H; 
    int* b2 = p + D*H + H + H*C; 
    int* X  = p + D*H + H + H*C + C; 
    
    // Starting the forward pass of the image
    
    print_str("Starting the forward pass for the image.\n");
    int t_start = get_num_cycles();
    for (int j = 0; j < H; j++) 
    {
        int activation = *(b1 + j); 
        for (int k = 0; k < D; k++) 
        {
            activation += (*(X + k))*(*(W1 + H*k + j)); 
        }
        if(activation > 0)
        {
            hidden[j] = activation;
        }
        else
        {
            hidden[j] = 0; 
        }
    }   
    for (int j = 0; j < C; j++)
    {
        scores[j] = *(b2 + j);   
        for (int k = 0; k < H; k++) 
        {
            scores[j] += hidden[k]*(*(W2 + C*k + j)); 
        }      
    }
    int t_end  = get_num_cycles();
    
    // End of the forward pass
    
	print_str("Completed the forward pass in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    print_str("Printing the scores in hex.\n");
    
    // Priniting the scores 
    
    for(int i = 0; i < C; i++)
    {
        print_str("Score_");
        print_dec(i); 
        print_str(": "); 
        print_hex(scores[i],8);
        print_str("\n");   
    }
   
}
