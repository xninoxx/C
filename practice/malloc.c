#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()

int main() {

    // DYNAMIC MEMORY ALLOCATION (`malloc`):
    // Static arrays require a fixed size known at compile-time (e.g., char arr[50]).
    // `malloc()` (Memory Allocation) lets you request an exact number of bytes from the 
    // operating system at runtime, based on user input or changing conditions.

    int number = 0;
    printf("Enter the number of grades: ");
    scanf("%d", &number);

    // ALLOCATING MEMORY & POINTER USAGE:
    // Why use a pointer (`char *grades`) here?
    // 1. `malloc()` returns the *starting memory address* of the newly carved-out chunk of RAM. 
    //    We store that address in a pointer variable.
    // 2. Because it's a pointer, we can use array subscript notation (`grades[i]`) to access 
    //    and modify those dynamically allocated memory blocks seamlessly just like a normal array.
    char *grades = malloc(number * sizeof(char));

    // ERROR CHECKING:
    // If the system is out of RAM or the request fails, malloc() returns NULL. 
    // Always check for NULL before using the pointer to avoid segmentation faults.
    if (grades == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Populate the dynamically allocated memory with user input
    for (int i = 0; i < number; i++) {
        printf("Enter grade #%d: ", i + 1);
        scanf(" %c", &grades[i]); // Notice the space before %c to clear lingering whitespace/newlines in the input buffer
    }

    // Print the grades back out
    for (int i = 0; i < number; i++) {
        printf("%c ", grades[i]);
    }
    printf("\n");

    // MEMORY MANAGEMENT:
    // 1. free(grades): Returns the "rented" block of RAM back to the operating system 
    //    so other programs can use it, preventing memory leaks.
    free(grades); 
    
    // 2. grades = NULL: Sets the pointer to NULL so it no longer points to that 
    //    freed memory address (avoids a dangerous "dangling pointer").
    grades = NULL; 

    return 0;
}