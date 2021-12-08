//                              -*- Mode: Verilog -*-
// Filename        : systolic1.v
// Description     : Systolic Array Multiplier for Stage 1



module systolic1 (
		   input 		 clk, start, stop,
		   // Integer inputs corresponding to the weights
		   input [31:0] 	 w0, w1, w2,w3,w4,w5,w6,w7,w8,w9,w10,w11,w12, w13, w14, w15, w16, w17, w18, w19, w20, w21, w22, w23, w24, w25, w26, w27, w28, w29, w30, w31, 
    input [31:0]          image,                                  // Integer input corresponding to the image
    output [31:0]         p0, p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p15, p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31  // Output integers for the result
		 ) ;


   reg [31:0] im;            
   
    always @(posedge clk) begin
	    im <= image;
    end	    
	
    mac  mac0( .clk(clk), .start(start), .stop(stop), .w(w0), .im(im),  .p(p0)); 
    mac  mac1( .clk(clk), .start(start), .stop(stop), .w(w1), .im(im),  .p(p1));
    mac  mac2( .clk(clk), .start(start), .stop(stop), .w(w2), .im(im),  .p(p2));
    mac  mac3( .clk(clk), .start(start), .stop(stop), .w(w3), .im(im),  .p(p3));
    mac  mac4( .clk(clk), .start(start), .stop(stop), .w(w4), .im(im),  .p(p4));
    mac  mac5( .clk(clk), .start(start), .stop(stop), .w(w5), .im(im),  .p(p5));
    mac  mac6( .clk(clk), .start(start), .stop(stop), .w(w6), .im(im),  .p(p6));
    mac  mac7( .clk(clk), .start(start), .stop(stop), .w(w7), .im(im),  .p(p7));
    mac  mac8( .clk(clk), .start(start), .stop(stop), .w(w8), .im(im),  .p(p8));
    mac  mac9( .clk(clk), .start(start), .stop(stop), .w(w9), .im(im),  .p(p9));
    mac  mac10( .clk(clk), .start(start), .stop(stop), .w(w10), .im(im),  .p(p10));
    mac  mac11( .clk(clk), .start(start), .stop(stop), .w(w11), .im(im),  .p(p11));
    mac  mac12( .clk(clk), .start(start), .stop(stop), .w(w12), .im(im),  .p(p12));
    mac  mac13( .clk(clk), .start(start), .stop(stop), .w(w13), .im(im),  .p(p13));
    mac  mac14( .clk(clk), .start(start), .stop(stop), .w(w14), .im(im),  .p(p14));
    mac  mac15( .clk(clk), .start(start), .stop(stop), .w(w15), .im(im),  .p(p15));
    mac  mac16( .clk(clk), .start(start), .stop(stop), .w(w16), .im(im),  .p(p16));
    mac  mac17( .clk(clk), .start(start), .stop(stop), .w(w17), .im(im),  .p(p17));
    mac  mac18( .clk(clk), .start(start), .stop(stop), .w(w18), .im(im),  .p(p18));
    mac  mac19( .clk(clk), .start(start), .stop(stop), .w(w19), .im(im),  .p(p19));
    mac  mac20( .clk(clk), .start(start), .stop(stop), .w(w20), .im(im),  .p(p20));
    mac  mac21( .clk(clk), .start(start), .stop(stop), .w(w21), .im(im),  .p(p21));
    mac  mac22( .clk(clk), .start(start), .stop(stop), .w(w22), .im(im),  .p(p22));
    mac  mac23( .clk(clk), .start(start), .stop(stop), .w(w23), .im(im),  .p(p23));
    mac  mac24( .clk(clk), .start(start), .stop(stop), .w(w24), .im(im),  .p(p24));
    mac  mac25( .clk(clk), .start(start), .stop(stop), .w(w25), .im(im),  .p(p25));
    mac  mac26( .clk(clk), .start(start), .stop(stop), .w(w26), .im(im),  .p(p26));
    mac  mac27( .clk(clk), .start(start), .stop(stop), .w(w27), .im(im),  .p(p27));
    mac  mac28( .clk(clk), .start(start), .stop(stop), .w(w28), .im(im),  .p(p28));
    mac  mac29( .clk(clk), .start(start), .stop(stop), .w(w29), .im(im),  .p(p29));
    mac  mac30( .clk(clk), .start(start), .stop(stop), .w(w30), .im(im),  .p(p30));
    mac  mac31( .clk(clk), .start(start), .stop(stop), .w(w31), .im(im),  .p(p31));
 

   
endmodule // systolic1


