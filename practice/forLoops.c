#include <stdio.h>
#include <unistd.h> // For sleep()

int main() {

    // FOR LOOP (Counting Up):
    // Structure: for (Initialization; Condition; Update)
    // Starts at i = 1, keeps running while i <= 25, and adds 2 to i each cycle.
    for (int i = 1; i <= 25; i += 2) {
        printf("%d\n", i);
    }
    printf("addition counter done!\n");

    // FOR LOOP (Counting Down with a Delay):
    // Starts at i = 10, runs while i >= 0, and subtracts 1 (i--) each cycle.
    for (int i = 10; i >= 0; i--) {
        sleep(1); // Pauses the program for 1 second before continuing
        printf("%d\n", i);
    }

    printf("HAPPY NEW YEAR!");

    return 0;
}