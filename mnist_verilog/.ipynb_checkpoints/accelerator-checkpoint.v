//                              -*- Mode: Verilog -*-
// Filename        : accelerator.v
// Description     : NN Accelerator



module accelerator (
		   input 		 clk, reset,
    input [31:0]          image,                                  // Integer input corresponding to the image
           output                ready,
//		   output reg [31:0]         result;                                 // Output integers for the result
    output [31:0]         result0,                                 // Output integers for the result
    output [31:0]         result1,                                 // Output integers for the result
    output [31:0]         result2,                                 // Output integers for the result
    output [31:0]         result3,                                 // Output integers for the result
    output [31:0]         result4,                                 // Output integers for the result
    output [31:0]         result5,                                 // Output integers for the result
    output [31:0]         result6,                                 // Output integers for the result
    output [31:0]         result7,                                 // Output integers for the result
    output [31:0]         result8,                                 // Output integers for the result
    output [31:0]         result9,                                 // Output integers for the result
    
    output [31:0] counter1
            
) ;


	wire [31:0]   w1_0;
	wire [31:0]   w1_1;
	wire [31:0]   w1_2;
	wire [31:0]   w1_3;
	wire [31:0]   w1_4;
	wire [31:0]   w1_5;
	wire [31:0]   w1_6;
	wire [31:0]   w1_7;
	wire [31:0]   w1_8;
	wire [31:0]   w1_9;
	wire [31:0]   w1_10;
	wire [31:0]   w1_11;
	wire [31:0]   w1_12;
	wire [31:0]   w1_13;
	wire [31:0]   w1_14;
	wire [31:0]   w1_15;
	wire [31:0]   w1_16;
	wire [31:0]   w1_17;
	wire [31:0]   w1_18;
	wire [31:0]   w1_19;
	wire [31:0]   w1_20;
	wire [31:0]   w1_21;
	wire [31:0]   w1_22;
	wire [31:0]   w1_23;
	wire [31:0]   w1_24;
	wire [31:0]   w1_25;
	wire [31:0]   w1_26;
	wire [31:0]   w1_27;
	wire [31:0]   w1_28;
	wire [31:0]   w1_29;
	wire [31:0]   w1_30;
	wire [31:0]   w1_31;

	wire [31:0]   w2_0;
	wire [31:0]   w2_1;
	wire [31:0]   w2_2;
	wire [31:0]   w2_3;
	wire [31:0]   w2_4;
	wire [31:0]   w2_5;
	wire [31:0]   w2_6;
	wire [31:0]   w2_7;
	wire [31:0]   w2_8;
	wire [31:0]   w2_9;

	wire [31:0]   p0;
	wire [31:0]   p1;
	wire [31:0]   p2;
	wire [31:0]   p3;
	wire [31:0]   p4;
	wire [31:0]   p5;
	wire [31:0]   p6;
	wire [31:0]   p7;
	wire [31:0]   p8;
	wire [31:0]   p9;
	wire [31:0]   p10;
	wire [31:0]   p11;
	wire [31:0]   p12;
	wire [31:0]   p13;
	wire [31:0]   p14;
	wire [31:0]   p15;
	wire [31:0]   p16;
	wire [31:0]   p17;
	wire [31:0]   p18;
	wire [31:0]   p19;
	wire [31:0]   p20;
	wire [31:0]   p21;
	wire [31:0]   p22;
	wire [31:0]   p23;
	wire [31:0]   p24;
	wire [31:0]   p25;
	wire [31:0]   p26;
	wire [31:0]   p27;
	wire [31:0]   p28;
	wire [31:0]   p29;
	wire [31:0]   p30;
	wire [31:0]   p31;

	wire [31:0]   relu_out;

/*    
	wire [31:0]   result0;
	wire [31:0]   result1;
	wire [31:0]   result2;
	wire [31:0]   result3;
	wire [31:0]   result4;
	wire [31:0]   result5;
	wire [31:0]   result6;
	wire [31:0]   result7;
	wire [31:0]   result8;
	wire [31:0]   result9;
*/    

	wire [31:0]   counter1;
	wire [31:0]   counter2;

	wire          start1;
	wire          start2;

	wire          stop1;
	wire          stop2;

    assign   counter1 = counter1;
    assign   ready = stop1 & stop2;

    // Insert code to send out result sequentially, rather than parallely right now

systolic1 systolic1 (.clk(clk), .start(start1), .stop(stop1), .image(image), .w0(w1_0), .w1(w1_1), .w2(w1_2),.w3(w1_3),.w4(w1_4),.w5(w1_5),.w6(w1_6),.w7(w1_7),.w8(w1_8),.w9(w1_9),.w10(w1_10),.w11(w1_11),.w12(w1_12), .w13(w1_13), .w14(w1_14), .w15(w1_15), .w16(w1_16), 
.w17(w1_17), .w18(w1_18), .w19(w1_19), .w20(w1_20), .w21(w1_21), .w22(w1_22), .w23(w1_23), .w24(w1_24), .w25(w1_25), .w26(w1_26), .w27(w1_27), .w28(w1_28), .w29(w1_29), .w30(w1_30), .w31(w1_31),.p0(p0), .p1(p1), .p2(p2),.p3(p3),.p4(p4),.p5(p5),.p6(p6),.p7(p7),.p8(p8),.p9(p9),.p10(p10),.p11(p11),.p12(p12), .p13(p13), .p14(p14), .p15(p15), .p16(p16), 
.p17(p17), .p18(p18), .p19(p19), .p20(p20), .p21(p21), .p22(p22), .p23(p23), .p24(p24), .p25(p25), .p26(p26), .p27(p27), .p28(p28), .p29(p29), .p30(p30), .p31(p31));
	
    relu relu (.counter2(counter2[4:0]),.p0(p0), .p1(p1), .p2(p2),.p3(p3),.p4(p4),.p5(p5),.p6(p6),.p7(p7),.p8(p8),.p9(p9),.p10(p10),.p11(p11),.p12(p12), .p13(p13), .p14(p14), .p15(p15), .p16(p16), 
.p17(p17), .p18(p18), .p19(p19), .p20(p20), .p21(p21), .p22(p22), .p23(p23), .p24(p24), .p25(p25), .p26(p26), .p27(p27), .p28(p28), .p29(p29), .p30(p30), .p31(p31), .r(relu_out));
 
systolic2 systolic2 (.clk(clk), .start(start2), .stop(stop2), .relu_out(relu_out), .w0(w2_0), .w1(w2_1), .w2(w2_2),.w3(w2_3),.w4(w2_4),.w5(w2_5),.w6(w2_6),.w7(w2_7),.w8(w2_8),.w9(w2_9),.p0(result0), .p1(result1), .p2(result2),.p3(result3),.p4(result4),.p5(result5),.p6(result6),.p7(result7),.p8(result8),.p9(result9)); 

   
control control (.clk(clk), .reset(reset), .counter1(counter1), .counter2(counter2), .start1(start1), .start2(start2), .stop1(stop1), .stop2(stop2), .rdata1(w1_0), .rdata2(w2_0));

	wbmem wbmem (.clk(clk), .ctr1(counter1), .ctr2(counter2), .w1_0(w1_0), .w1_1(w1_1), .w1_2(w1_2),.w1_3(w1_3),.w1_4(w1_4),.w1_5(w1_5),.w1_6(w1_6),.w1_7(w1_7),.w1_8(w1_8),.w1_9(w1_9),.w1_10(w1_10),.w1_11(w1_11),.w1_12(w1_12), .w1_13(w1_13), .w1_14(w1_14), .w1_15(w1_15), .w1_16(w1_16), 
.w1_17(w1_17), .w1_18(w1_18), .w1_19(w1_19), .w1_20(w1_20), .w1_21(w1_21), .w1_22(w1_22), .w1_23(w1_23), .w1_24(w1_24), .w1_25(w1_25), .w1_26(w1_26), .w1_27(w1_27), .w1_28(w1_28), .w1_29(w1_29), .w1_30(w1_30), .w1_31(w1_31), .w2_0(w2_0), .w2_1(w2_1), .w2_2(w2_2), .w2_3(w2_3), .w2_4(w2_4), .w2_5(w2_5), .w2_6(w2_6), .w2_7(w2_7), .w2_8(w2_8), .w2_9(w2_9)); 

endmodule