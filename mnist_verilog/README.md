Verilog code for the accelerator
- To exploit parallelism the architecutre given below has been used and on each cycle one pixel is being processed.
- Weights are read in parallely using multiple BRAM's, and activations are computed parallely using multiple MAC's. 
- Each module in the block diagram corresponds to the respective verilog implementation and are self-explanatory. 

To run the simulation following commands can be used : 
```
iverilog -o accelerator_tb -c program_file.txt
```
followed by, 
```
./accelerator_tb
```
This shall print out the scores in hexadecimal. Design can be synthesised using yosys with (shall take significant time), 
```
yosys synth.ys
```
And to test the same `program_file_synth.txt` is to be used.

Schematic : 

![alt text](https://github.com/sgauthamr2001/mnist_picorv32/blob/main/mnist_verilog/accelerator_schematic.JPG)
