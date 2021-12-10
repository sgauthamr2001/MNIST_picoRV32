`timescale 1ns/1ns 

// This test bench will run for a fixed 1000 clock cycles and then dump out the memory
// Test cases are such that they should finish within this time
// If the CPU continues after this point, it should not result in changes in data
// Safe to assume that imem contains only 0 after the last instruction

// MACROS:
// A single parameter is passed into the code, 
// which is the path to the files imem.mem, dmem0-3.mem and expout.mem
// Test cases ensure the files are named appropriately

module accelerator_tb_synth ();
    
    reg  clk, reset;
    wire [31:0] image, result0, result1, result2, result3, result4, result5, result6, result7, result8, result9, ctr1;
    integer i;


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


    xmem u2(
        .ctr1(ctr1),
        .xdata(image)
    );


    // Set up clock
    always #5 clk=~clk;

    initial begin
	// Uncomment below to dump out VCD file for gtkwave
	// NOTE: This will NOT work on the jupyter terminal
	// $dumpfile("cpu_tb.vcd");
	// $dumpvars(0, "cpu_tb");
        $display("RUNNING TEST");
        clk = 0;
        reset = 0;
        #3
        reset = 1;   // This is active high reset
        #6         // At least 100 because Xilinx assumes 100ns reset in post-syn sim
        reset = 0;   // Reset removed - normal functioning resumes
        @(posedge clk);
        for (i=0; i<1000; i=i+1) begin
            @(posedge clk);
        end

        $display("Result0 %d",$signed(result0));
        $display("Result1 %d",$signed(result1));
        $display("Result2 %d",$signed(result2));
        $display("Result3 %d",$signed(result3));
        $display("Result4 %d",$signed(result4));
        $display("Result5 %d",$signed(result5));
        $display("Result6 %d",$signed(result6));
        $display("Result7 %d",$signed(result7));
        $display("Result8 %d",$signed(result8));
        $display("Result9 %d",$signed(result9));

	$finish;	
    end
    
endmodule

