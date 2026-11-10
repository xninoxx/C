#include <stdio.h>

int main() {

    // ARRAY: A fixed-size collection of elements of the same data type
    //        (Like a single variable that can hold multiple values at once).

    int numbers[] = {10, 20, 30, 40, 50, 60, 70, 80};
    char grades[] = {'A', 'B', 'C', 'D', 'F'};
    char name[] = "Nino Yeah"; // A string is just an array of characters

    /*
    // You can also assign or change values later using their index (starting at 0):
    numbers[0] = 100;
    numbers[1] = 90;
    numbers[2] = 80;
    numbers[3] = 70;
    numbers[4] = 60;
    */

    // LOOPING THROUGH AN ARRAY:
    // sizeof(numbers) gives the total bytes of the whole array (e.g., 32 bytes for 8 ints).
    // sizeof(numbers[0]) gives the bytes of a single element (4 bytes for an int).
    // Total bytes / single element bytes = total number of elements in the array (8).
    for (int i = 0; i < sizeof(numbers) / sizeof(numbers[0]); i++) {
        printf("%d ", numbers[i]);
    }

    return 0;
}