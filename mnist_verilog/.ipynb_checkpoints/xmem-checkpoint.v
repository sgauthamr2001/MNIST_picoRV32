//                              -*- Mode: Verilog -*-
// Filename        : xmem.v
// Description     : Module to send in images to accelerator for testing  
// Purpose         : Feeds input to accelerator based on address pointed to by counter 

module xmem (
    input [31:0] ctr1,
    output [31:0] xdata
);
    
    reg [31:0] mem[0:1023];    // Define a 1-K location memory (4KB)
    initial 
        begin 
            $readmemh({"xdata.mem"},mem); 
        end
    assign xdata = mem[ctr1];    // Asynchornous read, register already used in systolic module 
    
endmodule