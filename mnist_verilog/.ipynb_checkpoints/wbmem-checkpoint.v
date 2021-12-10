//                              -*- Mode: Verilog -*-
// Filename        : wbmem.v
// Description     : Weights memory module 
// Purpose         : Coressponds to the module which gives out weights
     
module wbmem (
    input [31:0] ctr1,    // Acts as address to first set of weights 
    input [31:0] ctr2,    // Acts as address to second set of weights
    input clk,            // Required for synchornous reads to correspond to block ram
    input reset,          // Reset signal 
    input re,             // Read enable for synthesis to BRAM 
    // Outputs for [W1|b1] 
    output reg [31:0]   w1_0,
	output reg [31:0]   w1_1,
	output reg [31:0]   w1_2,
	output reg [31:0]   w1_3,
	output reg [31:0]   w1_4,
	output reg [31:0]   w1_5,
	output reg [31:0]   w1_6,
	output reg [31:0]   w1_7,
	output reg [31:0]   w1_8,
	output reg [31:0]   w1_9,
	output reg [31:0]   w1_10,
	output reg [31:0]   w1_11,
	output reg [31:0]   w1_12,
	output reg [31:0]   w1_13,
	output reg [31:0]   w1_14,
	output reg [31:0]   w1_15,
	output reg [31:0]   w1_16,
	output reg [31:0]   w1_17,
	output reg [31:0]   w1_18,
	output reg [31:0]   w1_19,
	output reg [31:0]   w1_20,
	output reg [31:0]   w1_21,
	output reg [31:0]   w1_22,
	output reg [31:0]   w1_23,
	output reg [31:0]   w1_24,
	output reg [31:0]   w1_25,
	output reg [31:0]   w1_26,
	output reg [31:0]   w1_27,
	output reg [31:0]   w1_28,
	output reg [31:0]   w1_29,
	output reg [31:0]   w1_30,
	output reg [31:0]   w1_31,
    // Outputs for [W2|b2]
    output reg [31:0] w2_0,
    output reg [31:0] w2_1,
    output reg [31:0] w2_2,
    output reg [31:0] w2_3,
    output reg [31:0] w2_4,
    output reg [31:0] w2_5,
    output reg [31:0] w2_6,
    output reg [31:0] w2_7,
    output reg [31:0] w2_8,
    output reg [31:0] w2_9 
);
    
    // Define a 1-K location memory (4KB) correspnding to [W1|b1] and 32 such locations.
    
    reg [31:0] w00mem[0:1023];
    reg [31:0] w01mem[0:1023]; 
    reg [31:0] w02mem[0:1023]; 
    reg [31:0] w03mem[0:1023];
    reg [31:0] w04mem[0:1023]; 
    reg [31:0] w05mem[0:1023];   
    reg [31:0] w06mem[0:1023];   
    reg [31:0] w07mem[0:1023];   
    reg [31:0] w08mem[0:1023];   
    reg [31:0] w09mem[0:1023];   
    reg [31:0] w10mem[0:1023];   
    reg [31:0] w11mem[0:1023];   
    reg [31:0] w12mem[0:1023];   
    reg [31:0] w13mem[0:1023];   
    reg [31:0] w14mem[0:1023]; 
    reg [31:0] w15mem[0:1023]; 
    reg [31:0] w16mem[0:1023]; 
    reg [31:0] w17mem[0:1023]; 
    reg [31:0] w18mem[0:1023];
    reg [31:0] w19mem[0:1023]; 
    reg [31:0] w20mem[0:1023];   
    reg [31:0] w21mem[0:1023];   
    reg [31:0] w22mem[0:1023];   
    reg [31:0] w23mem[0:1023];   
    reg [31:0] w24mem[0:1023];   
    reg [31:0] w25mem[0:1023];   
    reg [31:0] w26mem[0:1023];   
    reg [31:0] w27mem[0:1023];   
    reg [31:0] w28mem[0:1023];   
    reg [31:0] w29mem[0:1023];
    reg [31:0] w30mem[0:1023];   
    reg [31:0] w31mem[0:1023]; 
    
    // Define a 1-K location memory (4KB) correspnding to [W2|b2] and 10 such locations.
    
    reg [31:0] w32mem[0:1023];   
    reg [31:0] w33mem[0:1023];   
    reg [31:0] w34mem[0:1023];   
    reg [31:0] w35mem[0:1023];   
    reg [31:0] w36mem[0:1023];   
    reg [31:0] w37mem[0:1023];   
    reg [31:0] w38mem[0:1023];   
    reg [31:0] w39mem[0:1023];   
    reg [31:0] w40mem[0:1023];
    reg [31:0] w41mem[0:1023];     
    
    // Reading the weights from .mem files, generated using nn.c 
    initial 
    begin 
        $readmemh({"weights/w00_0.mem"},w00mem);
        $readmemh({"weights/w01_0.mem"},w01mem);
        $readmemh({"weights/w02_0.mem"},w02mem);
        $readmemh({"weights/w03_0.mem"},w03mem);
        $readmemh({"weights/w04_0.mem"},w04mem);
        $readmemh({"weights/w05_0.mem"},w05mem);
        $readmemh({"weights/w06_0.mem"},w06mem);
        $readmemh({"weights/w07_0.mem"},w07mem);
        $readmemh({"weights/w08_0.mem"},w08mem);
        $readmemh({"weights/w09_0.mem"},w09mem);
        $readmemh({"weights/w10_0.mem"},w10mem);
        $readmemh({"weights/w11_0.mem"},w11mem);
        $readmemh({"weights/w12_0.mem"},w12mem);
        $readmemh({"weights/w13_0.mem"},w13mem);
        $readmemh({"weights/w14_0.mem"},w14mem);
        $readmemh({"weights/w15_0.mem"},w15mem);
        $readmemh({"weights/w16_0.mem"},w16mem);
        $readmemh({"weights/w17_0.mem"},w17mem);
        $readmemh({"weights/w18_0.mem"},w18mem);
        $readmemh({"weights/w19_0.mem"},w19mem);
        $readmemh({"weights/w20_0.mem"},w20mem);
        $readmemh({"weights/w21_0.mem"},w21mem);
        $readmemh({"weights/w22_0.mem"},w22mem);
        $readmemh({"weights/w23_0.mem"},w23mem);
        $readmemh({"weights/w24_0.mem"},w24mem);
        $readmemh({"weights/w25_0.mem"},w25mem);
        $readmemh({"weights/w26_0.mem"},w26mem);
        $readmemh({"weights/w27_0.mem"},w27mem);
        $readmemh({"weights/w28_0.mem"},w28mem);
        $readmemh({"weights/w29_0.mem"},w29mem);
        $readmemh({"weights/w30_0.mem"},w30mem);
        $readmemh({"weights/w31_0.mem"},w31mem);
        $readmemh({"weights/w00_1.mem"},w32mem);
        $readmemh({"weights/w01_1.mem"},w33mem);
        $readmemh({"weights/w02_1.mem"},w34mem);
        $readmemh({"weights/w03_1.mem"},w35mem);
        $readmemh({"weights/w04_1.mem"},w36mem);
        $readmemh({"weights/w05_1.mem"},w37mem);
        $readmemh({"weights/w06_1.mem"},w38mem);
        $readmemh({"weights/w07_1.mem"},w39mem);
        $readmemh({"weights/w08_1.mem"},w40mem);
        $readmemh({"weights/w09_1.mem"},w41mem);
    end
    
    initial 
        begin 
            w2_0 <= 0; 
            w2_1 <= 0; 
            w2_2 <= 0; 
            w2_3 <= 0; 
            w2_4 <= 0; 
            w2_5 <= 0;  
            w2_6 <= 0; 
            w2_7 <= 0; 
            w2_8 <= 0; 
            w2_9 <= 0;
        end 
    
    always @ (posedge clk) 
        begin 
            if (reset) 
                begin
                    w1_0 <= 0; 
                    w1_1 <= 0; 
                    w1_2 <= 0; 
                    w1_3 <= 0; 
                    w1_4 <= 0; 
                    w1_5 <= 0;  
                    w1_6 <= 0; 
                    w1_7 <= 0; 
                    w1_8 <= 0; 
                    w1_9 <= 0; 
                    w1_10 <= 0;   
                    w1_11 <= 0; 
                    w1_12 <= 0; 
                    w1_13 <= 0; 
                    w1_14 <= 0; 
                    w1_15 <= 0;  
                    w1_16 <= 0; 
                    w1_17 <= 0; 
                    w1_18 <= 0; 
                    w1_19 <= 0; 
                    w1_20 <= 0;  
                    w1_21 <= 0; 
                    w1_22 <= 0; 
                    w1_23 <= 0; 
                    w1_24 <= 0; 
                    w1_25 <= 0; 
                    w1_26 <= 0; 
                    w1_27 <= 0; 
                    w1_28 <= 0; 
                    w1_29 <= 0; 
                    w1_30 <= 0; 
                    w1_31 <= 0;  
                end 
            else 
            if(re)
                begin
                    w1_0 <= w00mem[ctr1]; 
                    w1_1 <= w01mem[ctr1]; 
                    w1_2 <= w02mem[ctr1]; 
                    w1_3 <= w03mem[ctr1]; 
                    w1_4 <= w04mem[ctr1]; 
                    w1_5 <= w05mem[ctr1];  
                    w1_6 <= w06mem[ctr1]; 
                    w1_7 <= w07mem[ctr1]; 
                    w1_8 <= w08mem[ctr1]; 
                    w1_9 <= w09mem[ctr1]; 
                    w1_10 <= w10mem[ctr1];   
                    w1_11 <= w11mem[ctr1]; 
                    w1_12 <= w12mem[ctr1]; 
                    w1_13 <= w13mem[ctr1]; 
                    w1_14 <= w14mem[ctr1]; 
                    w1_15 <= w15mem[ctr1];  
                    w1_16 <= w16mem[ctr1]; 
                    w1_17 <= w17mem[ctr1]; 
                    w1_18 <= w18mem[ctr1]; 
                    w1_19 <= w19mem[ctr1]; 
                    w1_20 <= w20mem[ctr1];  
                    w1_21 <= w21mem[ctr1]; 
                    w1_22 <= w22mem[ctr1]; 
                    w1_23 <= w23mem[ctr1]; 
                    w1_24 <= w24mem[ctr1]; 
                    w1_25 <= w25mem[ctr1]; 
                    w1_26 <= w26mem[ctr1]; 
                    w1_27 <= w27mem[ctr1]; 
                    w1_28 <= w28mem[ctr1]; 
                    w1_29 <= w29mem[ctr1]; 
                    w1_30 <= w30mem[ctr1]; 
                    w1_31 <= w31mem[ctr1]; 
                end 
             
            if(re) 
                begin 
                    w2_0 <= w32mem[ctr2]; 
                    w2_1 <= w33mem[ctr2]; 
                    w2_2 <= w34mem[ctr2]; 
                    w2_3 <= w35mem[ctr2]; 
                    w2_4 <= w36mem[ctr2]; 
                    w2_5 <= w37mem[ctr2];  
                    w2_6 <= w38mem[ctr2]; 
                    w2_7 <= w39mem[ctr2]; 
                    w2_8 <= w40mem[ctr2]; 
                    w2_9 <= w41mem[ctr2]; 
                end        
        end 
    
endmodule // wbmem 
