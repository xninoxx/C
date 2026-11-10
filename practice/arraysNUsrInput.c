#include <stdio.h>

int main() {

    // Enter user input into an array

    int scores[5] = {0};

    for (int i = 0; i < 5; i++) {
        printf("Enter a score: ");
        scanf("%d", &scores[i]);
    }
    
    for (int i = 0; i < 5; i++) {
        printf("%d ", scores[i]);
    }

    return 0;
}