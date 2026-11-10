#include <stdio.h>
#include <stdlib.h> // Required for rand() and srand()
#include <time.h>   // Required for time()

int main() {

    // PSEUDO-RANDOM NUMBERS:
    // Computers can't generate true random numbers easily. Instead, they use a 
    // mathematical formula starting from a "seed" value to generate a predictable 
    // sequence. Without a new seed, the program would output the exact same 
    // "random" numbers every single time you run it.

    // srand(time(NULL)): Seeds the random number generator.
    // - srand = "Seed Random"
    // - time(NULL) returns the current calendar time in seconds. Because time 
    //   always changes, our seed is different every run, yielding unique results.
    srand(time(NULL));

    int min = 50;
    int max = 100;

    // HOW THE RANGE FORMULA WORKS:
    // 1. (max - min + 1): Calculates the total size of our range. 
    //    (100 - 50 + 1 = 51 possible values, from 50 to 100 inclusive).
    // 2. rand() % (...) : rand() generates a huge number (up to RAND_MAX). 
    //    The modulo (%) operator finds the remainder, narrowing the numbers down to a 
    //    span of 0 to 50.
    // 3. + min          : Shifts the 0-50 span upward so it starts at 50, 
    //    giving us our target range of 50 to 100.
    //
    // * NOTE ON RAND_MAX: A built-in constant macro defined in <stdlib.h> 
    //   that represents the maximum possible integer value that rand() can return 
    //   (on most systems, it's at least 32,767).
    int randomNum1 = (rand() % (max - min + 1)) + min;
    int randomNum2 = (rand() % (max - min + 1)) + min;
    int randomNum3 = (rand() % (max - min + 1)) + min;

    printf("%d %d %d", randomNum1, randomNum2, randomNum3);

    return 0;
}