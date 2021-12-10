Description of the files :
- nn.c : A simple two-layer neural Network code in C with ReLU activation and 32 hidden units. Input is a 28 x 28 image reshaped to 1 x 784. Output is scores corresponding to each class from [0-9] in hex. 
- The rest correspond to weight, bias and input image files. 
- val_data has around 10 images to check for accuracy and correctness of weights, but the forward pass is implemented on PicoRV32 only for a single image.      
