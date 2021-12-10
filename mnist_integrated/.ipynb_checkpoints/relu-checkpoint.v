//                              -*- Mode: Verilog -*-
// Filename        : relu.v
// Description     : ReLU block
// Purpose         : Feeds input to the second layer at every clock edge, 
//                   after computing the ReLU activation. 

module relu (
    input clk,
    input [31:0] counter2,
    // Integer inputs corresponding to the results of FC1
    input [31:0] 
    p0,p1,p2,p3,p4,
    p5,p6,p7,p8,p9,
    p10,p11,p12,p13,
    p14,p15,p16,p17,
    p18,p19,p20,p21,
    p22,p23,p24,p25,
    p26,p27,p28,p29,
    p30,p31,
    output reg [31:0] r   
);

    // Performing ReLU computations 
    
    always @(posedge clk)
    begin
        case (counter2)
            32'd0 :  r <= ($signed(p0) > 0)? p0 : 0;
            32'd1 :  r <= ($signed(p1) > 0)? p1 : 0;
            32'd2 :  r <= ($signed(p2) > 0)? p2 : 0;
            32'd3 :  r <= ($signed(p3) > 0)? p3 : 0;
            32'd4 :  r <= ($signed(p4) > 0)? p4 : 0;
            32'd5 :  r <= ($signed(p5) > 0)? p5 : 0;
            32'd6 :  r <= ($signed(p6) > 0)? p6 : 0;
            32'd7 :  r <= ($signed(p7) > 0)? p7 : 0;
            32'd8 :  r <= ($signed(p8) > 0)? p8 : 0;
            32'd9 :  r <= ($signed(p9) > 0)? p9 : 0;
            32'd10 :  r <= ($signed(p10) > 0)? p10 : 0;
            32'd11 :  r <= ($signed(p11) > 0)? p11 : 0;
            32'd12 :  r <= ($signed(p12) > 0)? p12 : 0;
            32'd13 :  r <= ($signed(p13) > 0)? p13 : 0;
            32'd14 :  r <= ($signed(p14) > 0)? p14 : 0;
            32'd15 :  r <= ($signed(p15) > 0)? p15 : 0;
            32'd16 :  r <= ($signed(p16) > 0)? p16 : 0;
            32'd17 :  r <= ($signed(p17) > 0)? p17 : 0;
            32'd18 :  r <= ($signed(p18) > 0)? p18 : 0;
            32'd19 :  r <= ($signed(p19) > 0)? p19 : 0;
            32'd20 :  r <= ($signed(p20) > 0)? p20 : 0;
            32'd21 :  r <= ($signed(p21) > 0)? p21 : 0;
            32'd22 :  r <= ($signed(p22) > 0)? p22 : 0;
            32'd23 :  r <= ($signed(p23) > 0)? p23 : 0;
            32'd24 :  r <= ($signed(p24) > 0)? p24 : 0;
            32'd25 :  r <= ($signed(p25) > 0)? p25 : 0;
            32'd26 :  r <= ($signed(p26) > 0)? p26 : 0;
            32'd27 :  r <= ($signed(p27) > 0)? p27 : 0;
            32'd28 :  r <= ($signed(p28) > 0)? p28 : 0;
            32'd29 :  r <= ($signed(p29) > 0)? p29 : 0;
            32'd30 :  r <= ($signed(p30) > 0)? p30 : 0;
            32'd31 :  r <= ($signed(p31) > 0)? p31 : 0;    
            32'd32 :  r <= 32'd1;    // Padding for the second stage to add the bias term
            default:  r <= 0; 
        endcase
    end
    
endmodule // relu
