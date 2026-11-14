#include <stdio.h>

int main() {
    char buf[256]; // Our temporary memory buffer

    printf("Type something: ");
    
    // Read input from standard input (keyboard) into our buffer
    if (fgets(buf, sizeof(buf), stdin) != NULL) {
        printf("You typed: %s", buf);
    }
    
    return 0;
}