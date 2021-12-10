//                              -*- Mode: Verilog -*-
// Filename        : systolic2.v
// Description     : Systolic Array Multiplier for Stage 2
// Purpose         : Connects all the mac units for the second layer with the inputs

module systolic2 (
    input clk, start, stop,
    // Integer inputs corresponding to the weights
    input [31:0] w0, w1, w2,w3,w4,w5,w6,w7,w8,w9,
    input [31:0] relu_out, // Integer input from ReLU
    output [31:0] p0, p1,p2,p3,p4,p5,p6,p7,p8,p9 // Output integers for the result
); 
   
    // Instantiating the MAC units of second layer 
    mac  mac0( .clk(clk), .start(start), .stop(stop), .w(w0), .im(relu_out),  .p(p0)); 
    mac  mac1( .clk(clk), .start(start), .stop(stop), .w(w1), .im(relu_out),  .p(p1));
    mac  mac2( .clk(clk), .start(start), .stop(stop), .w(w2), .im(relu_out),  .p(p2));
    mac  mac3( .clk(clk), .start(start), .stop(stop), .w(w3), .im(relu_out),  .p(p3));
    mac  mac4( .clk(clk), .start(start), .stop(stop), .w(w4), .im(relu_out),  .p(p4));
    mac  mac5( .clk(clk), .start(start), .stop(stop), .w(w5), .im(relu_out),  .p(p5));
    mac  mac6( .clk(clk), .start(start), .stop(stop), .w(w6), .im(relu_out),  .p(p6));
    mac  mac7( .clk(clk), .start(start), .stop(stop), .w(w7), .im(relu_out),  .p(p7));
    mac  mac8( .clk(clk), .start(start), .stop(stop), .w(w8), .im(relu_out),  .p(p8));
    mac  mac9( .clk(clk), .start(start), .stop(stop), .w(w9), .im(relu_out),  .p(p9));

endmodule // systolic2


