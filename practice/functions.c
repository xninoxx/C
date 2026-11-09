#include <stdio.h>
#include <string.h>

// Setup parameters for our variables. this tells the program: we need an variable called name that's a char type etc.
// You can name these variables anything, it wont change anything in the program
// All what matters is that you enter correct arguments
void happyBirthday(char name[], int age) { // Write code once, reuse it later
    
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear %s !", name);
    printf("\nHappy birthday to you!");
    printf("\nYou are %d years old!\n", age);

}

int main() {

    // function = A reuseable block of code that can be invoked "called"
    //            Arguments can be sent to a function  so that it can use them
    //            Funtions also can't see into other functions
    
    /*      
        Very inefficient
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear [name]!");
    printf("\nHappy birthday to you!");
    printf("\nYou are [age] years old!\n");

    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear [name]!");
    printf("\nHappy birthday to you!");
    printf("\nYou are [age] years old!\n");

    printf("\nHappy birthday to you!");
    printf("\nHappy birthday to you!");
    printf("\nHappy birthday dear [name]!");
    printf("\nHappy birthday to you!");
    printf("\nYou are [age] years old!\n");
    */

    char name[50] = "";
    int age = 0;

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Enter your age: ");
    scanf("%d", &age);

    // enter our variables as arguments
    happyBirthday(name, age); // call our happy birthday song
    happyBirthday(name, age); // So it prints our song
    happyBirthday(name, age); // Three times

    return 0;
}