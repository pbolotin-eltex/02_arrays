/********************************************************
Task number 2.4 here. Topic: arrays in C.

~ 4. Fill the matrix by number from 1 to N^2 like spiral:

     Example:
     1  2  3  4  5
     16 17 18 19 6
     15 24 25 20 7
     14 23 22 21 8
     13 12 11 10 9
********************************************************/
#include <stdio.h>

#define N_4 9

int func_part_04() {
    int matrix[N_4][N_4];
    int counter = 1;// Numbers into matrix
    int step_inside = 0;// Offset of the starting square index
    int quad_side_2x = 2*(N_4-1);// Doubled lenght of side (need for calculation)
    int x, y;// Coordinate system with center in matrix center
    int new_x, new_y;// Coordinate system transformed into C array index coordianate system
    
    while(quad_side_2x > 0) {
        x = -quad_side_2x/2;
        y = quad_side_2x/2;
        while(x < quad_side_2x/2) {
            new_x = (x + quad_side_2x/2)/2 + step_inside;
            new_y = (-y + quad_side_2x/2)/2 + step_inside;
            matrix[new_y][new_x] = counter;
            counter++;
            x += 2;
        }
        while(y > -quad_side_2x/2) {
            new_x = (x + quad_side_2x/2)/2 + step_inside;
            new_y = (-y + quad_side_2x/2)/2 + step_inside;
            matrix[new_y][new_x] = counter;
            counter++;
            y -= 2;
        }
        while(x > -quad_side_2x/2) {
            new_x = (x + quad_side_2x/2)/2 + step_inside;
            new_y = (-y + quad_side_2x/2)/2 + step_inside;
            matrix[new_y][new_x] = counter;
            counter++;
            x -= 2;
        }
        while(y < quad_side_2x/2) {
            new_x = (x + quad_side_2x/2)/2 + step_inside;
            new_y = (-y + quad_side_2x/2)/2 + step_inside;
            matrix[new_y][new_x] = counter;
            counter++;
            y += 2;
        }
        quad_side_2x -= 4;
        step_inside++;
    }
    if(quad_side_2x == 0) {
        y -= 2;
        x += 2;
        new_x = (x + quad_side_2x/2)/2 + step_inside;
        new_y = (-y + quad_side_2x/2)/2 + step_inside;
        matrix[new_y][new_x] = counter;
    }
    // Print result
    for(int i = 0; i < N_4*N_4; i++) {
        printf("%2d%c", matrix[i/N_4][i%N_4], (i+1)%N_4?' ':'\n');
    }
    return 0;
}

int main() {
    func_part_04();
    return 0;
}
