#include <stdio.h>
#include <stdlib.h>

int main() {

    // `calloc()` (Contiguous Allocation):
    // Like `malloc()`, `calloc()` dynamically allocates memory from the OS at runtime, 
    // but with two major differences:
    // 1. It takes two arguments: `calloc(number_of_elements, size_of_each_element)`.
    // 2. It automatically initializes every single allocated byte to zero (`0`), 
    //    whereas `malloc()` leaves memory full of whatever random garbage data was 
    //    previously sitting in RAM (uninitialized). While `malloc` is technically 
    //    a tiny fraction faster, `calloc` prevents dangerous bugs caused by garbage values.

    int number = 0;
    printf("Enter the number of players: ");
    scanf("%d", &number);

    // POINTER USAGE WITH calloc():
    // Why use a pointer (`int *scores`) here?
    // Just like `malloc()`, `calloc()` returns the *starting memory address* of the 
    // newly allocated, zero-initialized block of heap memory. We store that address 
    // in an integer pointer so we can use array subscript notation (`scores[i]`) 
    // to read and write to it.
    int *scores = calloc(number, sizeof(int));

    // ERROR CHECKING:
    // If the system lacks sufficient memory, calloc() returns NULL. 
    // Always check for NULL to prevent crashing.
    if (scores == NULL) {
        printf("Failed to allocate memory!");
        return 1;
    }

    // Populate the scores
    for (int i = 0; i < number; i++) {
        printf("Enter score #%d: ", i + 1);
        scanf("%d", &scores[i]);
    }

    // Print the scores back out
    for (int i = 0; i < number; i++) {
        printf("%d ", scores[i]);
    }
    printf("\n");

    // MEMORY MANAGEMENT:
    // Returns the dynamically allocated block back to the operating system.
    free(scores);
    
    // Prevents a dangling pointer by clearing the address.
    scores = NULL;

    return 0;
}