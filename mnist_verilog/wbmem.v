`timescale 1ns/1ps

module wbmem (
    input [31:0] ctr1, 
    input [31:0] ctr2, 
    input clk, 
    output [31:0] w1_data [0:31],
    output [31:0] w2_data [0:9] 
);
    
    reg [31:0] w1_data [0:31]; 
    reg [31:0] w2_data [0:9]; 
    
    // Define a 1-K location memory (4KB) correspnding to [W1|b1] and 32 such locations.

    reg [31:0] w00mem[0:1024];
    reg [31:0] w01mem[0:1024]; 
    reg [31:0] w02mem[0:1024]; 
    reg [31:0] w03mem[0:1024];
    reg [31:0] w04mem[0:1024]; 
    reg [31:0] w05mem[0:1024];   
    reg [31:0] w06mem[0:1024];   
    reg [31:0] w07mem[0:1024];   
    reg [31:0] w08mem[0:1024];   
    reg [31:0] w09mem[0:1024];   
    reg [31:0] w10mem[0:1024];   
    reg [31:0] w11mem[0:1024];   
    reg [31:0] w12mem[0:1024];   
    reg [31:0] w13mem[0:1024];   
    reg [31:0] w14mem[0:1024]; 
    reg [31:0] w15mem[0:1024]; 
    reg [31:0] w16mem[0:1024]; 
    reg [31:0] w17mem[0:1024]; 
    reg [31:0] w18mem[0:1024];
    reg [31:0] w19mem[0:1024]; 
    reg [31:0] w20mem[0:1024];   
    reg [31:0] w21mem[0:1024];   
    reg [31:0] w22mem[0:1024];   
    reg [31:0] w23mem[0:1024];   
    reg [31:0] w24mem[0:1024];   
    reg [31:0] w25mem[0:1024];   
    reg [31:0] w26mem[0:1024];   
    reg [31:0] w27mem[0:1024];   
    reg [31:0] w28mem[0:1024];   
    reg [31:0] w29mem[0:1024];
    reg [31:0] w30mem[0:1024];   
    reg [31:0] w31mem[0:1024]; 
    
    // Define a 1-K location memory (4KB) correspnding to [W2|b2] and 10 such locations.
    
    reg [31:0] w32mem[0:1024];   
    reg [31:0] w33mem[0:1024];   
    reg [31:0] w34mem[0:1024];   
    reg [31:0] w35mem[0:1024];   
    reg [31:0] w36mem[0:1024];   
    reg [31:0] w37mem[0:1024];   
    reg [31:0] w38mem[0:1024];   
    reg [31:0] w39mem[0:1024];   
    reg [31:0] w40mem[0:1024];
    reg [31:0] w41mem[0:1024];     
    
    initial 
        begin 
            $readmemh({`WBDIR,"/w00_0.mem"},w00mem);
            $readmemh({`WBDIR,"/w01_0.mem"},w01mem);
            $readmemh({`WBDIR,"/w02_0.mem"},w02mem);
            $readmemh({`WBDIR,"/w03_0.mem"},w03mem);
            $readmemh({`WBDIR,"/w04_0.mem"},w04mem);
            $readmemh({`WBDIR,"/w05_0.mem"},w05mem);
            $readmemh({`WBDIR,"/w06_0.mem"},w06mem);
            $readmemh({`WBDIR,"/w07_0.mem"},w07mem);
            $readmemh({`WBDIR,"/w08_0.mem"},w08mem);
            $readmemh({`WBDIR,"/w09_0.mem"},w09mem);
            $readmemh({`WBDIR,"/w10_0.mem"},w10mem);
            $readmemh({`WBDIR,"/w11_0.mem"},w11mem);
            $readmemh({`WBDIR,"/w12_0.mem"},w12mem);
            $readmemh({`WBDIR,"/w13_0.mem"},w13mem);
            $readmemh({`WBDIR,"/w14_0.mem"},w14mem);
            $readmemh({`WBDIR,"/w15_0.mem"},w15mem);
            $readmemh({`WBDIR,"/w16_0.mem"},w16mem);
            $readmemh({`WBDIR,"/w17_0.mem"},w17mem);
            $readmemh({`WBDIR,"/w18_0.mem"},w18mem);
            $readmemh({`WBDIR,"/w19_0.mem"},w19mem);
            $readmemh({`WBDIR,"/w20_0.mem"},w20mem);
            $readmemh({`WBDIR,"/w21_0.mem"},w21mem);
            $readmemh({`WBDIR,"/w22_0.mem"},w22mem);
            $readmemh({`WBDIR,"/w23_0.mem"},w23mem);
            $readmemh({`WBDIR,"/w24_0.mem"},w24mem);
            $readmemh({`WBDIR,"/w25_0.mem"},w25mem);
            $readmemh({`WBDIR,"/w26_0.mem"},w26mem);
            $readmemh({`WBDIR,"/w27_0.mem"},w27mem);
            $readmemh({`WBDIR,"/w28_0.mem"},w28mem);
            $readmemh({`WBDIR,"/w29_0.mem"},w29mem);
            $readmemh({`WBDIR,"/w30_0.mem"},w30mem);
            $readmemh({`WBDIR,"/w31_0.mem"},w31mem);

            $readmemh({`WBDIR,"/w00_1.mem"},w32mem);
            $readmemh({`WBDIR,"/w01_1.mem"},w33mem);
            $readmemh({`WBDIR,"/w02_1.mem"},w34mem);
            $readmemh({`WBDIR,"/w03_1.mem"},w35mem);
            $readmemh({`WBDIR,"/w04_1.mem"},w36mem);
            $readmemh({`WBDIR,"/w05_1.mem"},w37mem);
            $readmemh({`WBDIR,"/w06_1.mem"},w38mem);
            $readmemh({`WBDIR,"/w07_1.mem"},w39mem);
            $readmemh({`WBDIR,"/w08_1.mem"},w40mem);
            $readmemh({`WBDIR,"/w09_1.mem"},w41mem);
        end
    
    always @ (posedge clk) 
        begin 
            w1_data[0] <= w00mem[ctr1]; 
            w1_data[1] <= w01mem[ctr1]; 
            w1_data[2] <= w02mem[ctr1]; 
            w1_data[3] <= w03mem[ctr1]; 
            w1_data[4] <= w04mem[ctr1]; 
            w1_data[5] <= w05mem[ctr1];  
            w1_data[6] <= w06mem[ctr1]; 
            w1_data[7] <= w07mem[ctr1]; 
            w1_data[8] <= w08mem[ctr1]; 
            w1_data[9] <= w09mem[ctr1]; 
            w1_data[10] <= w10mem[ctr1];   
            w1_data[11] <= w11mem[ctr1]; 
            w1_data[12] <= w12mem[ctr1]; 
            w1_data[13] <= w13mem[ctr1]; 
            w1_data[14] <= w14mem[ctr1]; 
            w1_data[15] <= w15mem[ctr1];  
            w1_data[16] <= w16mem[ctr1]; 
            w1_data[17] <= w17mem[ctr1]; 
            w1_data[18] <= w18mem[ctr1]; 
            w1_data[19] <= w19mem[ctr1]; 
            w1_data[20] <= w20mem[ctr1];  
            w1_data[21] <= w21mem[ctr1]; 
            w1_data[22] <= w22mem[ctr1]; 
            w1_data[23] <= w23mem[ctr1]; 
            w1_data[24] <= w24mem[ctr1]; 
            w1_data[25] <= w25mem[ctr1]; 
            w1_data[26] <= w26mem[ctr1]; 
            w1_data[27] <= w27mem[ctr1]; 
            w1_data[28] <= w28mem[ctr1]; 
            w1_data[29] <= w29mem[ctr1]; 
            w1_data[30] <= w30mem[ctr1]; 
            w1_data[31] <= w31mem[ctr1];  
            
            w2_data[0] <= w32mem[ctr2]; 
            w2_data[1] <= w33mem[ctr2]; 
            w2_data[2] <= w34mem[ctr2]; 
            w2_data[3] <= w35mem[ctr2]; 
            w2_data[4] <= w36mem[ctr2]; 
            w2_data[5] <= w37mem[ctr2];  
            w2_data[6] <= w38mem[ctr2]; 
            w2_data[7] <= w39mem[ctr2]; 
            w2_data[8] <= w40mem[ctr2]; 
            w2_data[9] <= w41mem[ctr2]; 
        end 
endmodule