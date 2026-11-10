#include <stdio.h>

int main() {

    // Nested loops: A loop inside another loop. 
    // The inner loop must complete ALL of its cycles for EVERY single iteration of the outer loop.

    /*
    // Commented out code showing how tedious it would be to write manually without loops:
    for (int i = 1; i < 10; i++) {
        printf("%d ", i);
    } 
    printf("\n");
    
    for (int i = 1; i < 10; i++) {
        printf("%d ", i);
    } 
    printf("\n");

    for (int i = 1; i < 10; i++) {
        printf("%d ", i);
    } 
    printf("\n");
    */

    // OUTER LOOP: Runs 3 times (i = 1, 2, 3). Controls how many rows are printed.
    for (int i = 1; i < 4; i++) {
        
        // INNER LOOP: Runs 9 full times (j = 1 to 9) for EVERY SINGLE iteration of the outer loop.
        // It prints the numbers 1 through 9 horizontally on the current line.
        for (int j = 1; j < 10; j++) {
            printf("%d ", j);
        } 
        
        // Prints a newline after the inner loop finishes printing 1 through 9, moving to the next row.
        printf("\n");
    }

    return 0;
}