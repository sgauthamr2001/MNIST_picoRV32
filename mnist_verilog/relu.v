//                              -*- Mode: Verilog -*-
// Filename        : relu.v
// Description     : ReLU block



module relu (
		   input [4:0]		 counter;
		   // Integer inputs corresponding to the results of FC1
		   input [31:0] 	 p0, p1,p2,p3,p4,p5,p6,p7,p8,p9,p10,p11,p12,p13,p14,p16,p17,p18,p19,p20,p21,p22,p23,p24,p25,p26,p27,p28,p29,p30,p31;
		   output [31:0]         r;   
		 ) ;


   reg [31:0] im;            
   

	case (counter)
		5'b00000  : assign r = (p0 >0)? p0 : 0;
		5'b00001  : assign r = (p1 >0)? p1 : 0;
		5'b00010  : assign r = (p2 >0)? p2 : 0;
		5'b00011  : assign r = (p3 >0)? p3 : 0;
		5'b00100  : assign r = (p4 >0)? p4 : 0;
		5'b00101  : assign r = (p5 >0)? p5 : 0;
		5'b00110  : assign r = (p6 >0)? p6 : 0;
		5'b00111  : assign r = (p7 >0)? p7 : 0;
		5'b01000  : assign r = (p8 >0)? p8 : 0;
		5'b01001  : assign r = (p9 >0)? p9 : 0;
		5'b01010  : assign r = (p10 >0)? p10 : 0;
		5'b01011  : assign r = (p11 >0)? p11 : 0;
		5'b01100  : assign r = (p12 >0)? p12 : 0;
		5'b01101  : assign r = (p13 >0)? p13 : 0;
		5'b01110  : assign r = (p14 >0)? p14 : 0;
		5'b01111  : assign r = (p15 >0)? p15 : 0;
		5'b10000  : assign r = (p16 >0)? p16 : 0;
		5'b10001  : assign r = (p17 >0)? p17 : 0;
		5'b10010  : assign r = (p18 >0)? p18 : 0;
		5'b10011  : assign r = (p19 >0)? p19 : 0;
		5'b10100  : assign r = (p20 >0)? p20 : 0;
		5'b10101  : assign r = (p21 >0)? p21 : 0;
		5'b10110  : assign r = (p22 >0)? p22 : 0;
		5'b10111  : assign r = (p23 >0)? p23 : 0;
		5'b11000  : assign r = (p24 >0)? p24 : 0;
		5'b11001  : assign r = (p25 >0)? p25 : 0;
		5'b11010  : assign r = (p26 >0)? p26 : 0;
		5'b11011  : assign r = (p27 >0)? p27 : 0;
		5'b11100  : assign r = (p28 >0)? p28 : 0;
		5'b11101  : assign r = (p29 >0)? p29 : 0;
		5'b11110  : assign r = (p30 >0)? p30 : 0;
		5'b11111  : assign r = (p31 >0)? p31 : 0;


	endcase
   
endmodule // relu


