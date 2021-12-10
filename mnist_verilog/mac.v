//                              -*- Mode: Verilog -*-
// Filename        : mac.v
// Description     : Processing Element in the Systolic Array
// Purpose         : Multiplies, accumulates result and resets based on
//                   control signals.

module mac (
    input clk, start, stop,
    input [31:0] w,     // Integer input corresponding to the weights
    input [31:0] im,    // Integer input corresponding to the image
    output [31:0] p    // Output integers for the result
);
    
    reg [63:0] d; 
    always @(posedge clk) 
    begin
        if (start)          d <= 0;
        else if (stop)      d <= $signed(p);
        else                d <= $signed(p) + $signed(im)*$signed(w);
    end
    
    assign p = d[31:0];    // Taking the accumulated value  
        
endmodule // mac
