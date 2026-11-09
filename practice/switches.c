#include <stdio.h>

int main() {

    // Switch = An alternative to using many if-else statements
    //          More efficient with fixed integer values

    int dayOfWeek = 9;

    printf("Enter a day of the week (1-7): ");
    scanf("%d", &dayOfWeek);
    getchar();

    switch (dayOfWeek) {
        case 1:
            printf("It is Monday\n");
            break; // After the condition is true, break out of the statement
        case 2:
            printf("It is Tuesday\n");
            break;
        case 3:
            printf("It is Wednesday\n");
            break;
        case 4:
            printf("It is Thursday\n");
            break;
        case 5:
            printf("It is Friday\n");
            break;
        case 6:
            printf("It is Saturday\n");
            break;
        case 7:
            printf("It is Sunday\n");
            break;
        default: // Run when dayOfWeek doens't match any cases
            printf("Please only enter a number (1-7)\n");
    }

    char dayOfWeek2 = '\0';

    printf("Enter a day of the week (M, T, W, R, F, S, U): ");
    scanf("%c", &dayOfWeek2);
    getchar();

    switch (dayOfWeek2) {
        case 'M':
            printf("It is Monday\n");
            break;
        case 'T':
            printf("It is Tuesday\n");
            break;
        case 'W':
            printf("It is Wednesday\n");
            break;
        case 'R':
            printf("It is Thursday\n");
            break;
        case 'F':
            printf("It is Friday\n");
            break;
        case 'S':
            printf("It is Saturday\n");
            break;
        case 'U':
            printf("It is Sunday\n");
            break;
        default: 
            printf("Please only enter a character (M, T, W, R, F, S, U)\n");
    }


    return 0;
}