#include <stdio.h>

int main() {

    // ARRAY OF STRINGS: 
    // A 2D character array where each ROW acts as a separate string.
    // [Rows (implied 3)] x [Columns (max 10 bytes per string, including the hidden '\0')].
    char fruits[][10] = {"Apple",
                        "Banana",
                        "Coconut"};
                        
    // DYNAMIC ARRAY SIZE CALCULATION:
    // Total bytes of the whole 2D array divided by the bytes of a single row (10 bytes) 
    // gives you the exact number of strings (rows): 30 / 10 = 3.
    int sizeOfFruits = sizeof(fruits) / sizeof(fruits[0]);

    // Modifying individual characters using [row][column] indices:
    fruits[0][0] = 'e';
    fruits[0][4] = 'A';

    fruits[1][0] = 'a';
    fruits[1][5] = 'B';

    fruits[2][0] = 't';
    fruits[2][6] = 'C';

    // UNDER THE HOOD (Addressing your note):
    // C doesn't have a native "string" data type; strings are just character arrays 
    // ending with a null terminator ('\0') so C knows where the word stops.
    // This manual 2D character layout is essentially how the shorthand above is stored in memory:
    char fruit[][10] = {
        {'A', 'p', 'p', 'l', 'e', '\0', '\0', '\0', '\0', '\0'},
        {'B', 'a', 'n', 'a', 'n', 'a', '\0', '\0', '\0', '\0'},
        {'C', 'o', 'c', 'o', 'n', 'u', 't', '\0', '\0', '\0'}
    };
    
    // Loops through each row and prints the full string using %s
    for (int i = 0; i < sizeOfFruits; i++) {
        printf("%s\n", fruits[i]);
    } 


    return 0;
}