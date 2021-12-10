`timescale 1ns/1ns 

// This test bench will run for a fixed 1000 clock cycles
// Test cases are such that they should finish within this time (800 + 40)

module accelerator_tb_synth ();    
    reg  clk, reset;    // Clock and Reset 
    // Inputs and outputs of accelerator module 
    wire [31:0] 
    image, 
    result0, 
    result1, 
    result2, 
    result3, 
    result4, 
    result5, 
    result6, 
    result7, 
    result8, 
    result9, 
    ctr1;

    integer i;    // Clock loop variable 
    
    // Initiating accelerator module 
    
    accelerator a1 (
        .clk(clk),
        .reset(reset),
        .image(image),
        .result0(result0),
        .result1(result1),
        .result2(result2),
        .result3(result3),
        .result4(result4),
        .result5(result5),
        .result6(result6),
        .result7(result7),
        .result8(result8),
        .result9(result9),    
        .counter1(ctr1)
	);

    // Initiating the image data module
    
    xmem u2(
        .ctr1(ctr1),
        .xdata(image)
    );


    // Set up clock
    always #5 clk=~clk;

    initial 
        begin
            $display("RUNNING TEST");
            clk = 0;
            reset = 0;
            #3
            reset = 1;   // This is active high reset
            #6           
            reset = 0;   // Reset removed - normal functioning resumes
            
            @(posedge clk);
            for (i=0; i<1000; i=i+1) begin
                @(posedge clk);
            end

            $display("Score_0 - %h",$signed(result0));
            $display("Score_1 - %h",$signed(result1));
            $display("Score_2 - %h",$signed(result2));
            $display("Score_3 - %h",$signed(result3));
            $display("Score_4 - %h",$signed(result4));
            $display("Score_5 - %h",$signed(result5));
            $display("Score_6 - %h",$signed(result6));
            $display("Score_7 - %h",$signed(result7));
            $display("Score_8 - %h",$signed(result8));
            $display("Score_9 - %h",$signed(result9));

            $finish;	
        end
    
endmodule    // Test bench 
