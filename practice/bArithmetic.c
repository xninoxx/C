#include <stdio.h>

int main() {

    // arithmetic operators = + - * / % ++ --

    int x = 5;
    int y = 10;    
    int z = 0;

    z = x + y;
    printf("%d\n", z); // Prints out 15
    z = z - 5;
    printf("%d\n", z); // Prints out 10
    z = z * 2;
    printf("%d\n\n", z); // Prints out 20
    
    int a = 2;
    float b = 3; // new float
    float c = 0; // NEW float

    c = a / b; // 2 / 3 outputs 0, but why? because we are working with integers
    // and integers can't store decimals
    // Lets change 'c' to a float and the format specifier to a float aswell
    // We also should change 'b' to a float or else we'll devide by an integer

    printf("%f\n\n", c); // Float: outputs 0.666667

    // The modulus operator will give you the remainder of any devision
    int d = 10;
    int e = 3;
    int f = 0;

    f = d % e; 

    printf("%d\n\n", f); // Prints out 1

    // Increment operators add or take 1

    d++; // does: 10 + 1 = 11
    printf("%d\n\n", d);

    e--; // does: 3 - 1 = 2
    printf("%d\n\n", e);


    // There are faster ways to do arithmetic

    int g = 7;
    // Instead of doing: g = g + 2;
    // You can do

    g += 2;
    printf("%d\n", g); // Same result! prints out 9

    g -= 2;
    printf("%d\n", g); // Prints out 7

    g *= 3;
    printf("%d\n", g); // Prints out 21

    g /= 3;
    printf("%d\n", g); // Prints out 7

    return 0;
}