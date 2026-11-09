#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {

    int number = 5;

    // DO-WHILE LOOP: 
    // Always runs at least ONCE before checking the condition.
    // Keeps asking until the user enters a number greater than 0.
    do {
        printf("Enter a number greater than 0: ");
        scanf("%d", &number);
        getchar(); // Clears the leftover newline from the input buffer
    } while (number <= 0);

    char name[50] = "";

    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0'; // Removes the trailing newline character from fgets

    // WHILE LOOP (Validation):
    // Checks the condition FIRST. If the name is empty (length 0), 
    // it forces the user to try again.
    while (strlen(name) == 0) {
        printf("Name cannot be empty! Please enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strlen(name) - 1] = '\0';
    }

    printf("Hello %s\n", name);

    bool isRunning = true;
    char response = '\0';

    // WHILE LOOP:
    // Runs as long as the boolean flag 'isRunning' stays true.
    // Changing it to false breaks the loop and exits.
    while (isRunning) {
        printf("You are playing a game\n");
        printf("Would you like to continue? (Y = yes, N = no): ");
        scanf(" %c", &response); // Space before %c skips any leftover whitespace

        if (response != 'Y' && response != 'y') {
            isRunning = false; // Turns off the flag to exit the loop
        }
    }

    printf("You exited the game");

    return 0;
}