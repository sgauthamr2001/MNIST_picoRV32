
# MNIST Neural Network run on interfaced accelerator

This is a integrated peripheral code for the course project of EE2003 at IIT Madras.

*Note*: This is a forked repository of PicoRV32 (given below)

Acknowledgements:
- [PicoRV32](https://github.com/YosysHQ/picorv32) - from C. Wolf (YosysHQ).  

## Problem statement

<p align = "justify"> This is a project based on inference of neural networks on MNIST images. The baseline code written in C, is available at `mnist_nn/firmware/hello.c` and it can be run under the constrained environment of the picorv processor. Post training quantisation has been performed, so the weights are integers, and each pixel is an integer from [0-255]. The accelerator built using verilog in `mnist_verilog` is used to interface with the PicoRV32 to speed-up the inference of neural networks.  </p>

## Connecting the peripheral with PicoRV32 
- Certain address's are mapped to obtain particular functionality, and same can be reffered to the C code in firmware.
- First the PicoRV32 core puts in the data at the inputs of the accelerator. 
- After then, the reset signal is asserted to the accelerator, and it starts the computation. 
- Finally, the accelerator gives out ready signal and sends data back to the PicoRV32 core. 

## How to run

### Step 1 - Input image
The code comes with (28x28) image reshaped to (784 x 1) in `firmware/xdata.hex` generated similarly to that was how `wbd.hex` was generated in baseline code.  

### Step 2 - Build and run with iverilog

```sh
$ make
```
Just typing the above command (while you are in the `mnist_integrated` folder, not inside one of the subfolders) will take care of compiling and running with iverilog.

This is fairly fast enough and it takes about 10s to run on the default input image, which is a single 28 x 28 MNIST image.  

### Step 3 - Understand the results
When you run the simuation, it prints out the scores for each class on the terminal. The true value of results can be compared to the ones obtained by executing `temp_c_files/nn.c` to verify the correctness, and nn.c was veriified with a Tensorflow code. 
