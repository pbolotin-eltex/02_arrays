/*************************************************
Task number 2.3 here. Topic: arrays in C.
    
~ 3. Fill the upper triangle of matrix by ones.
     Fill the lower triangle of matrix by zeroes.
     
     Example:
     0 0 1
     0 1 1
     1 1 1
    
**************************************************/
#include <stdio.h>

#define N_3 10

int func_part_03() {
    int matrix[N_3][N_3];
    int *ptr = (int*)matrix;
    
    // This cycle filling the matrix by numbers
    // Property of arrays was used here:
    // 2D matrix, but this is one block of memory
    // And we need only one dimension for this doing.
    for(int i = 0; i < N_3*N_3; i++) {
        ptr[i] = (i/N_3 >= N_3-1 - i%N_3)?1:0;
        // We can change code above to code below, and nothing will change!
        // matrix[i/N_3][i%N_3] = (i/N_3 >= N_3-1 - i%N_3)?1:0;
    }
    // Print result
    for(int i = 0; i < N_3*N_3; i++) {
        printf("%2d%c", matrix[i/N_3][i%N_3], (i+1)%N_3?' ':'\n');
    }
    return 0;
}

int main() {
    func_part_03();
    return 0;
}
