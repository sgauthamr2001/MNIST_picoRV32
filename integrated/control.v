 //                              -*- Mode: Verilog -*-
// Filename        : control.v
// Description     : Controller



module control (
		   input 		 clk, reset,
    input [31:0]          rdata1, rdata2,
		   
    output reg [31:0]      counter1, 
    output reg [31:0]      counter2,
		   output                start1, stop1, start2, stop2
		 ) ;


		
		assign start1 = reset;
		assign stop1  = (rdata1 == 32'h7fffffff)?1:0;

		assign start2 = stop1;
		assign stop2  = (rdata2 == 32'h7fffffff)?1:0;

        initial begin 
            counter1 <= 0;
            counter2 <= 0;
        end
		always @(posedge clk) begin
			
			if (start1) counter1 <= 0;
            else if (stop1) counter1 <= counter1;
			else        counter1 <= counter1 + 1;
			
            if (start1) counter2 <= 0;
            else if (stop2) counter2 <= counter2;
            else if (start2) counter2 <= counter2 + 1;
            else counter2 <= 0; 

		end


   
endmodule // control