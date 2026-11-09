#include <stdio.h>

// FUNCTION DEFINITION:
// - The first 'int' specifies the return type: this function MUST return an integer
int square(int num) { 

    // RETURN STATEMENT:
    // Sends the final value back to the exact spot where the function was called
    // Once 'return' is hit, the function finishes executing
    return num * num; 
}


int main() {

    // CALLING THE FUNCTION:
    // We pass an argument (2, 3, or 4) into the function. 
    // The function does its math, returns the output, and that output gets stored in x, y, and z.
    int x = square(2); // square(2) computes 2 * 2 = 4, returns 4 -> stored in x
    int y = square(3); // square(3) computes 3 * 3 = 9, returns 9 -> stored in y
    int z = square(4); // square(4) computes 4 * 4 = 16, returns 16 -> stored in z

    // Print the returned values stored in our variables
    printf("%d\n", x); // Prints 4
    printf("%d\n", y); // Prints 9
    printf("%d\n", z); // Prints 16

    return 0; // Signals to the operating system that the program ran successfully
}