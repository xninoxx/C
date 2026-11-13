#include <stdio.h>
#include <stdlib.h>

int main() {

    // `realloc()` (Reallocation):
    // Used to resize a previously allocated block of heap memory without losing existing data.
    // Syntax: realloc(ptr, new_size_in_bytes)

    int number = 0;
    printf("Enter the number of prices: ");
    scanf("%d", &number);

    // POINTER USAGE (`float *prices`):
    // Why use a pointer here? 
    // `malloc()` carves out raw memory on the heap and returns its starting memory address. 
    // We store that address in a pointer so we can treat the heap allocation just like an array using `prices[i]`.
    float *prices = malloc(number * sizeof(float));

    if (prices == NULL) {
        printf("Memory allocation failed!");
        return 1;
    }

    for (int i = 0; i < number; i++) {
        printf("Enter price #%d: ", i + 1);
        scanf("%f", &prices[i]);
    }

    int newNumber = 0;
    printf("Enter a new number of prices: ");
    scanf("%d", &newNumber);

    // SAFE REALLOCATION & POINTER HANDLING (`float *temp`):
    // Why use a temporary pointer (`temp`) here?
    // If `realloc()` fails (e.g., not enough contiguous RAM available), it returns `NULL`. 
    // If you did `prices = realloc(prices, ...)` directly and it failed, you would overwrite 
    // the address in `prices` with `NULL`, instantly losing access to your original data (causing a memory leak).
    // Using `temp` lets you check for `NULL` safely first.
    float *temp = realloc(prices, newNumber * sizeof(float));

    if (temp == NULL) {
        printf("Could not reallocate memory!\n");
        // Note: original 'prices' is still safe and valid here because we didn't overwrite it directly.
    }
    else {
        // Reallocation succeeded: update `prices` to point to the new (potentially moved/resized) block.
        prices = temp;
        temp = NULL; // Clear temp to avoid a dangling pointer / confusion.

        // If the array grew larger, populate the new slots starting from the old count up to the new count
        for (int i = number; i < newNumber; i++) {
            printf("Enter price #%d: ", i + 1);
            scanf("%f", &prices[i]);
        }
        
        // Print all current prices
        for (int i = 0; i < newNumber; i++) {
            printf("$%.2f ", prices[i]);
        }
        printf("\n");
    }

    // MEMORY MANAGEMENT:
    // Free the final memory address pointed to by `prices` back to the operating system.
    free(prices);
    
    // Set to NULL to prevent a dangling pointer.
    prices = NULL;

    return 0;
}