#include <stdio.h>
#include <stdbool.h>

int main() {

    // Logical operators = Used to combine or modify boolean expressions

    // && = AND
    // || = OR
    // ! = NOT

    int temp = 1;

    if (temp > 0 && temp < 30) { // Both conditions must be true
        printf("The temperature is good\n");
    }
    else {
        printf("The temperature is bad\n");
    }

    // Yo
    int size = 6;

    if (size < 3 || size > 12) { // Atleast one of these condtions needs to be true
        printf("The size is NOT good bro\n");
    }
    else {
        printf("The size is good\n");
    }

    bool slayrRButton = false;

    if (!slayrRButton) { // Reverses the boolean expression
        printf("Matt Proxy IS behaving");
    }
    else {
        printf("Matt Proxy is NOT behaving");
    }

    return 0;
}