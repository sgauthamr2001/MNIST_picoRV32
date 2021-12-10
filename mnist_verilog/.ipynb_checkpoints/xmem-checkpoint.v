`timescale 1ns/1ps

module xmem (
    input [31:0] ctr1,
    output [31:0] xdata
);
    
    reg [31:0] mem[0:1023]; // Define a 1-K location memory (4KB)
    initial 
        begin 
            $readmemh({"xdata.mem"},mem); 
        end

    assign xdata = mem[ctr1];
endmodule