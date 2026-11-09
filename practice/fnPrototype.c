#include <stdio.h>
#include <stdbool.h>

// FUNCTION PROTOTYPES:
// Tells the compiler a function's name, return type, and parameters 
// before its actual body is written. This lets you call functions 
// inside main() even if they are defined further down in the file.
void hello(char name[], int age); 
bool ageCheck(int age);

int main() {

    // These work because the compiler already knows 
    // what these functions look like from the prototypes above.
    hello("bob", 40);
    
    if (ageCheck(30)) {
        printf("You are old enough to start driving lessons");
    }
    else {
        printf("You are NOT old enough to start driving lessons");
    }

    return 0;
}

// Function definitions are placed below main()
void hello(char name[], int age) {
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);
}

bool ageCheck(int age) {
    return age >= 16; // If age >= to 16: return true, else: return false
}