#include<stdio.h> 
#include<stdlib.h>

#define D 784           // Number of pixels in an MNIST image 
#define H 32            // Number of channels of hidden layer
#define C 10            // Number of classes
#define N 10            // Number of examples 

int main(int argc, const char * argv[]) {
    
    // Loading Weights and biases 
    
    // W1 - 25088 W
    int** W1 = malloc(D*sizeof(int*)); 
    for(int i = 0; i < D; i++)
        W1[i] = malloc(H*sizeof(int));
    
    // W2 - 320 W 
    int** W2 = malloc(H*sizeof(int*)); 
    for(int i = 0; i < H; i++)
        W2[i] = malloc(C*sizeof(int));
   
    int* b1 = malloc(H*sizeof(int));    // b1 - 32 W 
    int* b2 = malloc(C*sizeof(int));    // b2 - 10 W
    
    FILE *file1;
    FILE *file2; 
    FILE *file3; 
    FILE *file4; 
    FILE *datax; 
    
    file1 = fopen("weight_0.txt", "r");
    file2 = fopen("weight_2.txt", "r");
    file3 = fopen("bias_0.txt", "r");
    file4 = fopen("bias_2.txt", "r");
    
    // datax = fopen("wbd.hex","a+"); 

    for(int i = 0; i < D; i++)
    {
        for(int j = 0; j < H; j++) 
        {
            if (!fscanf(file1, "%d", &W1[i][j]))
                break;
            // fprintf(datax,"%.8x\n",W1[i][j]);
        }
    }
    
    for(int i = 0; i < H; i++)
    {
        if (!fscanf(file3, "%d", &b1[i]))
            break;
        // fprintf(datax,"%.8x\n",b1[i]);
    }
    
    
    for(int i = 0; i < H; i++)
    {
        for(int j = 0; j < C; j++) 
        {
            if (!fscanf(file2, "%d", &W2[i][j]))
                break; 
            // fprintf(datax,"%.8x\n",W2[i][j]);
        }
    }
    
    
    for(int i = 0; i < C; i++)
    {
        if (!fscanf(file4, "%d", &b2[i]))
            break;
        // fprintf(datax,"%.8x\n",b2[i]);
    }
    
    fclose(file1);
    fclose(file2);
    fclose(file3);
    fclose(file4);
            
    // Loading test data and test labels 
    // X - 7840 W 
    
    int** X = malloc(N*sizeof(int*)); 
    for(int i = 0; i < N; i++){
        X[i] = malloc(D*sizeof(int));
    }
    
    int* true_class = malloc(N*sizeof(int));     // 10 Words (On x86) 

    FILE *test_data;
    FILE *test_labels;  
    
    test_data = fopen("val_data.txt", "r");
    test_labels = fopen("val_labels.txt", "r");
    
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < D; j++) 
        {
            if (!fscanf(test_data, "%d", &X[i][j]))
                break;
            // fprintf(datax,"%.8x\n",X[i][j]);
        }
    }
    
    // for(int i = 0; i < (256*1024 - N*D - D*H - H - H*C - C); i++)
    //     fprintf(datax,"%.8x\n",0);
    
    for(int i = 0; i < N; i++)
    {
        if (!fscanf(test_labels, "%d", &true_class[i]))
            break;
    }
    
    // fclose(datax);
    fclose(test_data);
    fclose(test_labels);
    
    int hidden[H];        // 32 Words (Stack)   
    int pred_class[N];    // 10 Words (Stack)
    
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
    
    for (int n = 0; n < N; n++) 
    {
        for (int j = 0; j < H; j++) 
        {
            int activation = *(b1 + j); 
            for (int k = 0; k < D; k++) 
            {
                activation += X[n][k]*W1[k][j];  
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
            max_val += hidden[k]*W2[k][0]; 
        }
        
        for (int j = 1; j < C; j++)
        {
            int activation = *(b2 + j);   
            for (int k = 0; k < H; k++) 
            {
                activation += hidden[k]*W2[k][j]; 
            }      
            if(activation > max_val)
            {
                max_val = activation; 
                pred_class[n] = j;     
            }
        }
        printf("[Pred,True]_%d : (%d, %d)\n",n,pred_class[n],true_class[n]);
    }  
    
    free(W1); 
    free(W2); 
    free(b1); 
    free(b2); 
    free(X); 
    free(true_class); 
    
    return 0;
}

// W1 - 25088 W
// W2 - 320 W 
// b1 - 32 W 
// b2 - 10 W
// X - 7840 W 
// Pred - 10 Words 
// Total - 33300 W - 133200 < 256K