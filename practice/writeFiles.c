#include <stdio.h>

int main() {

    // FILE I/O & POINTERS:
    // Why use a pointer here (`FILE *pFile`)?
    // 1. Files can be massive. Instead of copying a whole file into your program, 
    //    fopen() returns a MEMORY ADDRESS (a pointer) to a small control block 
    //    managed by the operating system (called a file stream).
    // 2. Functions like fprintf() and fclose() need this memory address so they 
    //    know exactly which open file stream to write to or close.
    FILE *pFile = fopen("/home/nino/Desktop/output.txt", "w");

    char text[] = "At this the time, I cannot fulfill this request, as our systems are overloaded\nplease try again later and thank you for understanding!";

    // ERROR CHECKING:
    // If fopen() fails (e.g., bad permissions or invalid path), it returns NULL.
    // We check for this to prevent the program from crashing when trying to write.
    if (pFile == NULL) {
        printf("Error opening file\n");
        return 1; // Exit the program with an error code
    }
    
    // Writes the string into the file using the file pointer
    fprintf(pFile, "%s", text);

    printf("File was written successfully!");

    // Closes the file stream, freeing up the system resources associated with the pointer.
    fclose(pFile);

    return 0;
}