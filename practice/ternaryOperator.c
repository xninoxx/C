#include <stdio.h>
#include <stdbool.h>

int main() {

    // TERNARY OPERATOR (? :) = A compact shorthand for an if-else statement.
    // Structure: (condition) ? value_if_true : value_if_false;

    int x = 7;
    int y = 6;
    
    // If x > y is true, assign x to max; otherwise, assign y.
    int max = (x > y) ? x : y;
    printf("%d\n", max);

    bool isOnline = true;
    
    // Evaluates isOnline: if true prints "online", if false prints "offline"
    printf("%s\n", (isOnline) ? "online" : "offline");

    int number = 8;
    
    // Checks if number is even (remainder 0 when divided by 2)
    printf("%d is %s\n", number, (number % 2 == 0) ? "even" : "odd");

    int age = 18;
    
    // Checks if age is 18 or older to determine "adult" or "child"
    printf("%s\n", (age >= 18) ? "adult" : "child");

    int hours = 12;
    int minutes = 30;

    // Evaluates if hours < 12 to choose "AM", otherwise "PM"
    printf("%02d:%02d %s\n", hours, minutes, (hours < 12) ? "AM" : "PM");

    return 0;
}