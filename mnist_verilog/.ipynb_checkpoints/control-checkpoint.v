 //                              -*- Mode: Verilog -*-
// Filename        : control.v
// Description     : Controller
// Description     : Main control module of the accelerator, with below function. 
//                   Input data needs 785 cycles to finish the inner product.
//                   So '7fffffff' is added around 800th entry in the weight data 
//                   and on reading the same counter1 stalls at 800 and doesn't 
//                   increment as the next entry is also '7fffffff' in weight file.
//                   Similarly for the second set of weights the length of the 
//                   inner product in 33, so '7ffffffff' is added at 40. This means
//                   counter1 goes from 0 to 800, and counter2 from 0 to 40. The 
//                   start1 starts on reset and de-easserted after a clock cycle, 
//                   while stop1 is asserted after 800 clocks and remains asserted. 
//                   start2 is the same as stop1. This activates the 2nd systolic 
//                   module after computation of first one is completed. stop2 is 
//                   asserted after the computation of second layer is finished and
//                   combination of stop1 and stop2 signal is used to inteface with 
//                   the PicoRV32 peripheral. 

module control (
    input clk, 
    input reset,
    input [31:0] rdata1, rdata2,
    output reg [31:0] counter1, 
    output reg [31:0] counter2,
    output start1, stop1, start2, stop2
) ;

        // Setting the start and stop signals based on the previous behaviour 
    
		assign start1 = reset;
		assign stop1  = (rdata1 == 32'h7fffffff)?1:0;

		assign start2 = stop1;
		assign stop2  = (rdata2 == 32'h7fffffff)?1:0;
    
        // Modifying the counters as required after every clock    

		always @(posedge clk)
        begin	
			if (start1) counter1 <= 0;
            else if (stop1) counter1 <= counter1;     // Halts counter1
			else        counter1 <= counter1 + 1;
			
            if (start1) counter2 <= 0;
            else if (stop2) counter2 <= counter2;     // Halts counter2
            else if (start2) counter2 <= counter2 + 1;
            else counter2 <= 0; 
		end
   
endmodule // control
