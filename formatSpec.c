#include <stdio.h>

// We already covered Format Specifiers in variables.c a bit
// d = int and bool, f = float, lf = double, c = char, s = string
// '.1' sets the precision to 1 digit after the decimal point

int main() {

    int num1 = 1;
    int num2 = 10;
    int num3 = 100;
    int num4 = 1000;
    int num5 = 5000;
    int num6 = 500;
    int num7 = -50;

    float price1 = 19.99;
    float price2 = 1.50;
    float price3 = -100.00;

    // You can add a width to a format specifier to...
    // specify the minimum number of characters to print
    printf("%4d\n", num1); // Prints 3 spaces and 1 number (4 characters in total)
    printf("%4d\n", num2); // Prints 4 characters
    printf("%4d\n", num3); // Again, prints 4 characters

    // You can also justify the numbers to the left to add the empty space at the end
    printf("%-10d\n\n", num4); // adds 10 characters of empty space after the variable
    
    // You can also add leading zeros by preceding the number with a zero
    printf("%05d\n\n", num5); // Prints: "05000"

    // You can also add a '+' after the format specifier to see if a number is negative or positive
    printf("%+05d\n", num6); // Prints: "+0500"
    printf("%+d\n\n", num7);   // Prints: "-50"
    
    // example of what we've learned: 
    printf("%+7.2f\n", price1); // Prints: " +19.99"
    printf("%+7.2f\n", price2); // Prints: "  +1.50"
    printf("%+7.2f\n", price3); // Prints: "-100.00"

    return 0;
}