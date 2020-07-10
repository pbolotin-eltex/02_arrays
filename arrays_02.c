/*************************************************
Task number 2.2 here. Topic: arrays in C.

~ 2. Need to output array that was reversed:
     
     Input  -> 1 2 3 4 5
     Output -> 5 4 3 2 1
**************************************************/
#include <stdio.h>

#define N_2 10

int func_part_02() {
    int array[N_2];

    // Let's give array an order!
    for(int i = 0; i < N_2; array[i-1] = ++i/* (>:a)) */);
    
    // And now.. Reverse order here!
    // (It will need a swap variable)
    int swap;
    for(int i = 0; i < N_2/2; i++) {
        swap = array[i];
        array[i] = array[N_2-1 - i];
        array[N_2-1 - i] = swap;
    }
    
    // Of course, there is a XOR-swap method,
    // and if we don't have enough memory we can use it!
    /*
    for(int i = 0; i < N_2/2; i++) {
        array[i] ^= array[N_2-1 - i];
        array[N_2-1 - i] ^= array[i];
        array[i] ^= array[N_2-1 - i];
    }
    */
    
    // Print result now!
    for(int i = 0; i < N_2; i++) {
        printf("%2d", array[i]);
    }
    printf("\n");
    
    return 0;
}

int main() {
    func_part_02();
    return 0;
}
