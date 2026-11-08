#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    /* 
        Comparison operators: == (equal to), != (not equal to), > (greater than),
        < (less than), >= (greater than or equal to), <= (less than or equal to)
    */

    int age = 0;
    bool isStudent = true;
    char name[50] = "";

    printf("Enter your age: ");
    scanf("%d", &age);
    getchar();
    
    if (age >= 65) {
        printf("You are a senior\n");
    }
    else if (age >= 18) {
        printf("You are an adult\n"); // If age is equal or higher than 18, print this 
    }
    else if (age == 0) {
        printf("You are a baby bru\n");
    }
    else if (age < 0) {
        printf("You haven't been born yet\n"); // Allows you to add another condition
    }
    else {
        printf("You are underage\n"); // Prints this line if any of the previous condition weren't true
    }


    if (isStudent == true) {
        printf("You are a student\n");
    }
    else {
        printf("You are not a student\n");
    }

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    if (strlen(name) == 0) { // If user didn't type in their name
        printf("You did not enter your name");
    }
    else {
        printf("%s is such an good boy for entering their name", name);
    }
    
    return 0;
}