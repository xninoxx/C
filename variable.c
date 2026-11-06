#include <stdio.h>
#include <stdbool.h> // Include this header file to be able to use booleans

int main() {

    int age = 16;                 // Integer
    float plankLength = 50.5;     // Float
    double pi = 3.14159265358979; // Double
    char tier = 'S';              // Char
    char name[] = "Nino";         // String

    // You can also assign it with 1 or 0. 1 means True and 0 means False
    bool isCooked = true;         // Boolean

    // Use the '%' to specify a format
    // Use 'd' afterwards to specify an int (d = decimal)
    printf("I am %d years old.\n", age);

    // Use '%f' for floating point numbers
    // '.1' sets the precision to 1 digit after the decimal point
    printf("This plank is %.1f cm wide.\n", plankLength);

    // Use '%lf for long floating point number
    printf("The value of pi is %.14lf\n", pi);

    // Use '%c' for characters
    printf("C is an %c-tier programming language\n", tier);
    
    // Use '%s' for strings
    printf("Hello, my name is %s\n", name);

    // Use '%d' for booleans
    // We use '%d' because 1 and 0 means True and False in binary
    printf("%d", isCooked);
    return 1;
}