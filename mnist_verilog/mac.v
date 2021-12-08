//                              -*- Mode: Verilog -*-
// Filename        : mac.v
// Description     : Processing Element in the Systolic Array



module mac (
                 // Outputs
                 p,
                 // Inputs
                 clk, start, stop, w,im
                 ) ;
   input                 clk, start, stop;
   input [31:0]          w;   // Integer input corresponding to the weights
   input [31:0]          im;                                  // Integer input corresponding to the images
   output reg [31 :0]    p;  // Output integers for the result

    always @(posedge clk)  // Changed it to synchronous reset due to synthesis issues
    begin
        if (start)          p <= 0;
        else if (stop)      p <= p;
        else                p <= p + im*w;
    end
        
endmodule // mac
