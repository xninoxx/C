#include <stdio.h>

void birthday (int* age);

int main() {

    // POINTERS:
    // - A pointer is just a variable that stores a MEMORY ADDRESS instead of a normal value.
    // - '&' (Address-of operator): Gets the memory address where a variable lives in RAM.
    // - '*' (Dereference operator): Accesses or modifies the value stored AT that memory address.
    // 
    // Benefit: Instead of copying heavy data into functions (pass by value), 
    // you pass its memory address (pass by reference), allowing functions to directly modify the original data.

    int age = 16;

    // ANSWERING YOUR QUESTION: Which way is better?
    // 
    // Option A: Passing &age directly -> birthday(&age);
    // Best when you just need to pass the address once and don't need a separate pointer variable cluttering your code.
    // 
    // Option B: Creating a pointer variable first -> int *pAge = &age; birthday(pAge);
    // Best when you need to reuse the pointer, manipulate memory addresses, or inspect the address multiple times.
    // Both compile down to the exact same thing, but passing '&age' directly is cleaner if you only need it once.

    birthday(&age); // Passing the memory address of 'age' directly
    printf("You are %d years old\n", age);

    return 0;
}

/*
// PASS BY VALUE (What DOESN'T work here):
void birthday (int age) {
    // This creates a completely separate local copy of 'age'. 
    // Changing it here does NOTHING to the 'age' variable back in main().
    age++; 
}
*/

// PASS BY REFERENCE (What WORKS):
// The parameter 'int* age' means "I am expecting a memory address that points to an integer."
void birthday(int* age) {
    // (*age)++ says: "Go to the memory address stored in 'age', 
    // grab the value living there, and increment it by 1."
    // The parentheses are mandatory because ++ has higher precedence than *.
    (*age)++;
}