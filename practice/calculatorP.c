#include <stdio.h>
#include <stdbool.h>

int main() {

    // Calculator Program

    char operator = '\0';
    double num1 = 0.0;
    double num2 = 0.0;
    double result = 0.0;
    bool isValid = true;
    
    printf("Enter the first number: ");
    scanf("%lf", &num1);

    printf("Enter the operator (+ - * /): ");
    scanf(" %c", &operator); // Clear the newline char from input buffer

    printf("Enter the second number: ");
    scanf("%lf", &num2);

    switch (operator) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("You can't devide by zero! WHAT are you doing?!\n");
                isValid = false;
            }
            else {
                result = num1 / num2;
            }
            break;
        default:
            printf("Invalid operator\n");
            isValid = false;
    }
    if (isValid) {
        printf("Result: %.4lf", result);
    }
    
    return 0;
}
