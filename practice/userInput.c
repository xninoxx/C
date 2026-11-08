#include <stdio.h>
#include <string.h> // This header file provides usefull functions for strings like we have on line 43

int main() {

    int age = 0;
    float gpa = 0.0f; // Tells the program it HAS to be a float
    char grade = '\0'; // Sets 'grade' to an empty placeholder (value 0) until a real grade is assigned. (AKA Null terminator)
    char name[20] = ""; // We have to specify a size to the array. the our name variable now has a max size of 25 characters


    printf("Enter your age: ");
    // Takes the user's input and saves it into the 'age' variable using its memory address (&)
    // We use '&' to give scanf the variable's memory address, otherwise it cannot modify the original variable.
    scanf("%d", &age);

    printf("Enter your gpa: ");
    scanf("%f", &gpa);
    
    printf("Enter your grade: ");
    scanf(" %c", &grade);
    // The space before %c tells scanf to ignore any leftover spaces or "Enter" key presses from the previous inputs.
    // Without this space, scanf would accidentally read the leftover 

    // This wouldn't work because scanf can't read any whitespaces. scanf will stop reading after encountering any white spaces
        //printf("Enter your full name: ");
        //scanf("%s", &name);

    // getchar() consumes the leftover newline character ('\n') from the input buffer 
    // (often left behind by a previous scanf or input), preventing it from 
    // prematurely triggering the next input function.
    getchar();

    printf("Enter your full name: ");

    // fgets safely reads a line of text (including spaces) from the standard input.
    // Parameters:
    // 1. name       -> The destination character array where the input string is stored.
    // 2. sizeof(name) -> The maximum number of bytes (characters) to read (prevents buffer overflow).
    // 3. stdin      -> The input stream source (reads from the keyboard/standard input).
    fgets(name, sizeof(name), stdin); // You can also put the size of name instead of using the sizeof() funtion
    
    // Removes the trailing newline character ('\n') added by fgets 
    // by replacing it with a null terminator ('\0').   
    name[strlen(name) - 1] = '\0';

    printf("%d\n", age);   
    printf("%.2f\n", gpa);   
    printf("%c\n", grade);   
    printf("%s", name);   

    return 0;
}