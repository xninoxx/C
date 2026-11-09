#include <stdio.h>
#include <stdbool.h>

int main() {

    float price = 10.00;

    // These boolean values can change (true or false) depending on the customer
    bool isStudent = true; // Flag for student status
    bool isSenior = true; // Flag for senior status

    // Expected outcomes based on combinations:
    // Student only   = $9 (10% off)
    // Senior only    = $8 (20% off)
    // Student+Senior = $7 (Combined 30% off, price *= 0.7)
    // Neither        = $10 (No discount)

    // OUTER IF: First, check if the customer is a student
    if (isStudent) {

        // INNER IF (Nested): Runs ONLY if isStudent is TRUE 
        // Now it checks if they ALSO qualify as a senior
        if (isSenior) {
            printf("You get a student discount of %%10\n");
            printf("You get a senior discount of %%20\n");
            price *= 0.7; // Both are true: applies a 30% cumulative discount ($10 * 0.7 = $7)
        }

        // INNER ELSE: Runs if isStudent is TRUE, but isSenior is FALSE
        else {
            printf("You get a student discount of %%10\n");
            price *= 0.9; // Student only: applies a 10% discount ($10 * 0.9 = $9)
        }
    }
    // OUTER ELSE: Runs if isStudent is FALSE
    else {

        // INNER IF (Nested inside the outer else): 
        // Since they aren't a student, we check if they are at least a senior
        if (isSenior) {
            printf("You get a senior discount of %%20\n");
            price *= 0.8; // Senior only: applies a 20% discount ($10 * 0.8 = $8)
        }
        // (If both are false, the program skips this block entirely and price stays 10.00)
    }

    // Print the final calculated ticket price formatted to 2 decimal places
    printf("The price of a ticket is $%.2f\n", price);

    return 0;
}