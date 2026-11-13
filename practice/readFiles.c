#include <stdio.h>

int main() {

    // FILE I/O & POINTERS:
    // Why use a pointer here (`FILE *pFile`)?
    // 1. Operating system resource tracking: fopen() allocates and returns a memory 
    //    address (pointer) to a FILE control block. This lets C functions keep track 
    //    of the open file stream state (like current read position and EOF status).
    // 2. Memory efficiency: Instead of copying the file's contents into your program 
    //    all at once, the pointer acts as a handle to stream the data in chunks.
    FILE *pFile = fopen("/home/nino/Desktop/input.txt", "r");
    
    // BUFFER: A temporary storage array in RAM.
    // Note: When you pass 'buffer' into fgets(), it decays into a POINTER 
    // pointing to the first memory address of the array, telling fgets() 
    // exactly where to write the incoming file characters.
    char buffer[1024] = {0};

    // ERROR CHECKING:
    // If the file doesn't exist or can't be read, fopen() returns NULL.
    if (pFile == NULL) {
        printf("Could not open file\n");
        return 1;
    }

    // READING LINE BY LINE:
    // fgets reads characters from the file pointer until it hits a newline, 
    // reaches the buffer limit (1024), or hits the End-Of-File (EOF). 
    // It returns NULL when it successfully reaches the end of the file.
    while (fgets(buffer, sizeof(buffer), pFile) != NULL) {
        printf("%s", buffer);
    }

    // Closes the file stream using the pointer, releasing OS resources.
    fclose(pFile);

    return 0;
}