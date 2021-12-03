// This is free and unencumbered software released into the public domain.
//
// Anyone is free to copy, modify, publish, use, compile, sell, or
// distribute this software, either in source code form or as a compiled
// binary, for any purpose, commercial or non-commercial, and by any
// means.

#include "firmware.h"
#include "stats_helper.c"    // Include the stats helper functions up front so they can also be used
#include<stdio.h> 

#define NULL ((void *)0)
#define WBDBASE 0x30000000

#define D 784           // Number of pixels in an MNIST image 
#define H 32            // Number of channels of hidden layer
#define C 10            // Number of classes
#define N 10            // Number of examples 

void hello(void)
{
	int *p = (int *)WBDBASE;
    int hidden[H];       
    int pred_class[N];   

    int* W1 = p; 
    int* b1 = p + D*H; 
    int* W2 = p + D*H + H; 
    int* b2 = p + D*H + H + H*C; 
    int* X  = p + D*H + H + H*C + C; 
    
    /************************************************************************   
    
    FC layer -> ReLU (hidden) -> FC layer (scores)
    X: Input data of shape (N, D)
    scores: Tensor of shape (N, C) giving the classification scores for X
    hidden: Tensor of shape (N, H) giving the hidden layer representation
    W1: First layer weights; has shape (D, H)
    b1: First layer biases; has shape (H,)
    W2: Second layer weights; has shape (H, C)
    b2: Second layer biases; has shape (C,)
    
    *************************************************************************/
    
    print_str("Starting the forward pass...\n");
    int t_start = get_num_cycles();
    
    for (int n = 0; n < N; n++) 
    {
        for (int j = 0; j < H; j++) 
        {
            int activation = *(b1 + j); 
            for (int k = 0; k < D; k++) 
            {
                activation += (*(X + D*n + k))*(*(W1 + H*k + j)); 
            }
            if(activation > 0)
            {
                hidden[j] = activation;
            }
            else
            {
                hidden[j] = 0; 
            }
        }
        int max_val = *(b2);  
        pred_class[n] = 0; 
        for (int k = 0; k < H; k++) 
        {
            max_val += hidden[k]*(*(W2 + C*k)); 
        }
        for (int j = 1; j < C; j++)
        {
            int activation = *(b2 + j);   
            for (int k = 0; k < H; k++) 
            {
                activation += hidden[k]*(*(W2 + C*k + j)); 
            }      
            if(activation > max_val)
            {
                max_val = activation; 
                pred_class[n] = j;     
            }
        }
    }
    
    int t_end  = get_num_cycles();
	print_str("Completed the forward pass in ");
	print_dec(t_end - t_start);
	print_str(" cycles.\n");
    
    for(int i = 0; i < N; i++)
    {
        print_str("Prediction_");
        print_dec(i); 
        print_str(": "); 
        print_dec(pred_class[i]);
        print_str("\n");   
    }
}

