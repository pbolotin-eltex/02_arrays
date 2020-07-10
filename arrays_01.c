/********************************************
Task number 2 here. Topic: arrays in C.

~ 1. Need to output square matrix by given N:

     Example N = 3:
     1 2 3
     4 5 6
     7 8 9
*********************************************/

#include <stdio.h>

#define N_1 9

int func_part_01() {
    int matrix[N_1][N_1];
    int *ptr = (int*)matrix;
    
    // This cycle filling the matrix by numbers
    // Property of arrays was used here:
    // 2D matrix, but this is one block of memory
    // And we need only one dimension for this doing.
    for(int i = 0; i < N_1*N_1; i++) {
        ptr[i] = i+1;
    }
    
    // Print result
    // One cycle was used here - just for fun
    //
    // If you need more traditional printing method, it's below in comment
    // We can use that method, but this is slightly boring, isn't it?..
    for(int i = 0; i < N_1*N_1; i++) {
        printf("%2d%c", matrix[i/N_1][i%N_1], (i+1)%N_1?' ':'\n');
    }
    /*
    // This works, but.. just works, that's it..
    for(int i = 0; i < N_1; i++) {
        for(int j = 0; j < N_1; j++) {
            printf("%3d", matrix[i][j]);
        }
        printf("\n");
    }
    */
    return 0;
}

int main() {
    func_part_01();
    return 0;
}
