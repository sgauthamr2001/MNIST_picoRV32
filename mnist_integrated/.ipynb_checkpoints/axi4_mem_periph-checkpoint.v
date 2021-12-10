module axi4_mem_periph #(
	parameter AXI_TEST = 0,
	parameter VERBOSE = 0
) (
	/* verilator lint_off MULTIDRIVEN */

	input             clk,
	input             mem_axi_awvalid,
	output reg        mem_axi_awready,
	input      [31:0] mem_axi_awaddr,
	input      [ 2:0] mem_axi_awprot,

	input             mem_axi_wvalid,
	output reg        mem_axi_wready,
	input      [31:0] mem_axi_wdata,
	input      [ 3:0] mem_axi_wstrb,

	output reg        mem_axi_bvalid,
	input             mem_axi_bready,

	input             mem_axi_arvalid,
	output reg        mem_axi_arready,
	input      [31:0] mem_axi_araddr,
	input      [ 2:0] mem_axi_arprot,

	output reg        mem_axi_rvalid,
	input             mem_axi_rready,
	output reg [31:0] mem_axi_rdata,

	output            tests_passed
);
    
    wire [(785*32)-1:0] in_image;    // Wires connected to the accelerator 
    reg [31:0] image[0:784];         // Written to, by the for loop and is connected to the in_image , used to make connections easier on code
    reg        reset;                // Reset signal 

    // Mapping image to in_image 
    genvar j;
    for (j=0;j<785;j=j+1) begin
        assign in_image[32*(j+1)-1:32*j] = image[j];
    end
    
    wire ready;                        // Ready signal from the accelerator
    // Results sent back by the accelerator 
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
    
    // Initializing the accelerator module 
    
    accelerator accel (
        .clk(clk), 
        .reset(reset), 
        .in_image(in_image),
        .ready(ready),
        .result0(result0),
        .result1(result1),
        .result2(result2), 
        .result3(result3), 
        .result4(result4),
        .result5(result5), 
        .result6(result6), 
        .result7(result7), 
        .result8(result8), 
        .result9(result9)
    );
    
	reg [31:0]   memory [0:2048*1024/4-1] /* verilator public */;
    reg [31:0]   xmem  [0:1023] /* verilator public */;               // Memory to store val data (image) (4KB)  
    reg [31:0]   wkmem  [0:2048*1024/4-1] /* verilator public */;     // Working memory (2 MB) 

	reg verbose;
	initial verbose = $test$plusargs("verbose") || VERBOSE;

	assign tests_passed = 1;
	// Could not load this from the test bench for some reason?
	integer i;
	initial begin
        $readmemh("firmware/xdata.mem", xmem);       // Loading input image pixel data from file 
		for (i=0; i<1000000; i=i+1) begin
			wkmem[i] = 0;
		end
	end

	initial begin
		mem_axi_awready = 0;
		mem_axi_wready = 0;
		mem_axi_bvalid = 0;
		mem_axi_arready = 0;
		mem_axi_rvalid = 0;
		// tests_passed = 0;
	end

	reg latched_raddr_en = 0;
	reg latched_waddr_en = 0;
	reg latched_wdata_en = 0;

	reg fast_raddr = 0;
	reg fast_waddr = 0;
	reg fast_wdata = 0;

	reg [31:0] latched_raddr;
	reg [31:0] latched_waddr;
	reg [31:0] latched_wdata;
	reg [ 3:0] latched_wstrb;
	reg        latched_rinsn;

	task handle_axi_arvalid; begin
		mem_axi_arready <= 1;
		latched_raddr = mem_axi_araddr;
		latched_rinsn = mem_axi_arprot[2];
		latched_raddr_en = 1;
		fast_raddr <= 1;
	end endtask

	task handle_axi_awvalid; begin
		mem_axi_awready <= 1;
		latched_waddr = mem_axi_awaddr;
		latched_waddr_en = 1;
		fast_waddr <= 1;
	end endtask

	task handle_axi_wvalid; begin
		mem_axi_wready <= 1;
		latched_wdata = mem_axi_wdata;
		latched_wstrb = mem_axi_wstrb;
		latched_wdata_en = 1;
		fast_wdata <= 1;
	end endtask

	task handle_axi_rvalid; begin
		if (verbose)
			$display("RD: ADDR=%08x DATA=%08x%s", latched_raddr, memory[latched_raddr >> 2], latched_rinsn ? " INSN" : "");
		if (latched_raddr < 2048*1024) begin
			mem_axi_rdata <= memory[latched_raddr >> 2];
			mem_axi_rvalid <= 1;
			latched_raddr_en = 0;
		end else
		if ((latched_raddr >= 32'h3000_0000) && (latched_raddr < 32'h3100_0000)) begin
			// Input image pixel data 
            // $display("Data %08x: %08x", latched_raddr, xmem[(latched_raddr-'h3000_0000) >> 2]);
            mem_axi_rdata <= xmem[(latched_raddr-'h3000_0000) >> 2];
			mem_axi_rvalid <= 1;
			latched_raddr_en = 0; // Why?
		end else
		if ((latched_raddr >= 32'h4000_0000) && (latched_raddr < 32'h4200_0000)) begin
			// Working memory
			// $display("WK  %08x: %08x", latched_raddr, wkmem[(latched_raddr-'h4000_0000) >> 2]);
			mem_axi_rdata <= wkmem[(latched_raddr-'h4000_0000) >> 2];
			mem_axi_rvalid <= 1;
			latched_raddr_en = 0; // Why?
        end 
        // The below lines correspond to the mapping of ready, result 0-9 in order
        else
            if(latched_raddr == 32'h3200_0000 ) begin
			mem_axi_rdata <= ready;
			mem_axi_rvalid <= 1;
			latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == 32'h3300_0000) begin
            mem_axi_rdata <= result0;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd4)) begin
            mem_axi_rdata <= result1;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd8)) begin
            mem_axi_rdata <= result2;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd12)) begin
            mem_axi_rdata <= result3;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd16)) begin
            mem_axi_rdata <= result4;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd20)) begin
            mem_axi_rdata <= result5;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd24)) begin
            mem_axi_rdata <= result6;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd28)) begin
            mem_axi_rdata <= result7;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd32)) begin
            mem_axi_rdata <= result8;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
        end else
            if(latched_raddr == (32'h3300_0000 + 32'd36)) begin
            mem_axi_rdata <= result9;
            mem_axi_rvalid <= 1;
            latched_raddr_en = 0; // Why?       
		end else begin
			$display("OUT-OF-BOUNDS MEMORY READ FROM %08x", latched_raddr);
			$finish;
		end
	end endtask

	task handle_axi_bvalid; begin
		if (verbose)
			$display("WR: ADDR=%08x DATA=%08x STRB=%04b", latched_waddr, latched_wdata, latched_wstrb);
		if (latched_waddr < 2048*1024) begin
			if (latched_wstrb[0]) memory[latched_waddr >> 2][ 7: 0] <= latched_wdata[ 7: 0];
			if (latched_wstrb[1]) memory[latched_waddr >> 2][15: 8] <= latched_wdata[15: 8];
			if (latched_wstrb[2]) memory[latched_waddr >> 2][23:16] <= latched_wdata[23:16];
			if (latched_wstrb[3]) memory[latched_waddr >> 2][31:24] <= latched_wdata[31:24];
		end else
		if (latched_waddr == 32'h1000_0000) begin
			if (verbose) begin
				if (32 <= latched_wdata && latched_wdata < 128)
					$display("OUT: '%c'", latched_wdata[7:0]);
				else
					$display("OUT: %3d", latched_wdata);
			end else begin
				$write("%c", latched_wdata[7:0]);
`ifndef VERILATOR
				$fflush();
`endif
			end
		end else
		if (latched_waddr == 32'h2000_0000) begin
		end else 
		if ((latched_waddr >= 32'h3000_0000) && (latched_waddr < 32'h3100_0000)) begin
            $display("Data memory is read-only!");
		end else 
		if ((latched_waddr >= 32'h4000_0000) && (latched_waddr < 32'h4200_0000)) begin
			if (latched_wstrb[0]) wkmem[(latched_waddr-'h4000_0000) >> 2][ 7: 0] <= latched_wdata[ 7: 0];
			if (latched_wstrb[1]) wkmem[(latched_waddr-'h4000_0000) >> 2][15: 8] <= latched_wdata[15: 8];
			if (latched_wstrb[2]) wkmem[(latched_waddr-'h4000_0000) >> 2][23:16] <= latched_wdata[23:16];
            if (latched_wstrb[3]) wkmem[(latched_waddr-'h4000_0000) >> 2][31:24] <= latched_wdata[31:24]; end else

        if (latched_waddr == 32'h3100_0000) begin // Reset Signal
            reset <= latched_wdata;
            $display("Write %3d to the reset signal", latched_wdata); 
        end else
        if ((latched_waddr >= 32'h3400_0000) && (latched_waddr < 32'h3500_0000)) begin
            image[(latched_waddr - 'h3400_0000)>>2] <= latched_wdata;    // Writing to the input ports of accelerator 
		end else begin
			$display("OUT-OF-BOUNDS MEMORY WRITE TO %08x", latched_waddr);
            $finish;
		end
		mem_axi_bvalid <= 1;
		latched_waddr_en = 0;
		latched_wdata_en = 0;
	end endtask

	always @(negedge clk) begin
		if (mem_axi_arvalid && !(latched_raddr_en || fast_raddr)) handle_axi_arvalid;
		if (mem_axi_awvalid && !(latched_waddr_en || fast_waddr)) handle_axi_awvalid;
		if (mem_axi_wvalid  && !(latched_wdata_en || fast_wdata)) handle_axi_wvalid;
		if (!mem_axi_rvalid && latched_raddr_en) handle_axi_rvalid;
		if (!mem_axi_bvalid && latched_waddr_en && latched_wdata_en) handle_axi_bvalid;
	end

	always @(posedge clk) begin
		mem_axi_arready <= 0;
		mem_axi_awready <= 0;
		mem_axi_wready <= 0;

		fast_raddr <= 0;
		fast_waddr <= 0;
		fast_wdata <= 0;

		if (mem_axi_rvalid && mem_axi_rready) begin
			mem_axi_rvalid <= 0;
		end

		if (mem_axi_bvalid && mem_axi_bready) begin
			mem_axi_bvalid <= 0;
		end

		if (mem_axi_arvalid && mem_axi_arready && !fast_raddr) begin
			latched_raddr = mem_axi_araddr;
			latched_rinsn = mem_axi_arprot[2];
			latched_raddr_en = 1;
		end

		if (mem_axi_awvalid && mem_axi_awready && !fast_waddr) begin
			latched_waddr = mem_axi_awaddr;
			latched_waddr_en = 1;
		end

		if (mem_axi_wvalid && mem_axi_wready && !fast_wdata) begin
			latched_wdata = mem_axi_wdata;
			latched_wstrb = mem_axi_wstrb;
			latched_wdata_en = 1;
		end

		if (mem_axi_arvalid && !(latched_raddr_en || fast_raddr)) handle_axi_arvalid;
		if (mem_axi_awvalid && !(latched_waddr_en || fast_waddr)) handle_axi_awvalid;
		if (mem_axi_wvalid  && !(latched_wdata_en || fast_wdata)) handle_axi_wvalid;

		if (!mem_axi_rvalid && latched_raddr_en) handle_axi_rvalid;
		if (!mem_axi_bvalid && latched_waddr_en && latched_wdata_en) handle_axi_bvalid;
	end
endmodule
