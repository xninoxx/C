#include <stdio.h>

int main() {

    // break = Break out of a loop completely (STOP)
    // continue = Skip the rest of the current cycle and jump to the next iteration (SKIP)

    for (int i = 1; i <= 10; i++) {
        
        // If i equals 4, 'continue' skips the print statement below 
        // and immediately jumps to the next loop update (i becomes 5).
        if (i == 4) {
            continue;
        }
        // If i equals 8, 'break' immediately stops and exits the entire loop.
        else if (i == 8) {
            break;
        }

        printf("%d\n", i);
    }

    return 0;
}