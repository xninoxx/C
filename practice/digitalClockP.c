#include <stdio.h>
#include <time.h>
#include <stdbool.h>
#include <unistd.h>

int main() {

    // Digital Clock

    // time_t holds epoch seconds (seconds since Jan 1 1970)
    time_t rawtime = 0; 
    
    // POINTER USAGE (`struct tm *pTime`):
    // Why use pointers here?
    // 1. Avoiding bulky copies: `localtime()` returns a pointer to a statically allocated 
    //    `struct tm` containing date/time fields. Returning a pointer avoids copying the entire 
    //    struct's memory.
    // 2. Direct field access: The pointer lets us access individual members directly 
    //    using the arrow operator (`pTime->tm_hour`).
    // 3. Modifying rawtime: `time(&rawtime)` takes the *memory address* (a pointer) of `rawtime` 
    //    so the function can write the current system time directly into our variable.
    struct tm *pTime = NULL;
    
    bool isRunning = true;

    printf("Digital clock!\n");

    while (isRunning) {

        // Passes the memory address of rawtime so time() can update it in-place
        time(&rawtime);

        // Returns a pointer to the broken-down time structure
        pTime = localtime(&rawtime);

        // '\r' (Carriage Return) moves the cursor back to the start of the line 
        // instead of printing a new line every second, creating a live updating clock effect.
        printf("\r%02d:%02d:%02d", pTime->tm_hour, pTime->tm_min, pTime->tm_sec);
        
        // Forces the stdout buffer to flush immediately to the terminal 
        // (since terminal output is typically line-buffered by default).
        fflush(stdout); 

        sleep(1); // Pauses execution for 1 second using the POSIX sleep function
    }

    return 0;
}