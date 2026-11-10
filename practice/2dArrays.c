#include <stdio.h>

int main() {

    // 2D array = An array where each element is an array.
    // Here we have 4 rows and 3 columns of characters.
    char numpad[][3] = {{'1', '2', '3'}, 
                        {'4', '5', '6'}, 
                        {'7', '8', '9'},
                        {'*', '0', '3'}};

    // OUTER LOOP: Iterates through each ROW (i from 0 to 3)
    for (int i = 0; i < 4; i++) { 
        
        // INNER LOOP: Iterates through each COLUMN within the current row (j from 0 to 2)
        for (int j = 0; j < 3; j++) { 
            // Prints the character at the current row [i] and column [j]
            printf("%c ", numpad[i][j]);
        } 
        
        // Prints a newline after finishing all columns in a row, moving to the next line
        printf("\n");
    }

    return 0;
}