#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main() {

    // Weight converter program

    int choice = 0;
    float pounds = 0.0f;
    float kilograms = 0.0f;

    printf("Weight conversion calculator\n");
    printf("1. Kilograms to Pounds\n");
    printf("2. Pounds to kilograms\n");
    printf("Enter your choice (1 or 2): ");
    scanf("%d", &choice);

    if (choice == 1) {
        printf("Enter the weight in Kilograms: ");
        scanf("%f", &kilograms);
        pounds = kilograms * 2.20462;
        printf("%.2f Kilograms is equal to %.2f pounds", kilograms, pounds);
    }
    else if (choice == 2) {
        printf("Enter the weight in Pounds: ");
        scanf("%f", &pounds);
        kilograms = pounds / 2.20462;
        printf("%.2f Pounds is equal to %.2f Kilograms", pounds, kilograms);

    }
    else {
        printf("Invalid choice, please enter 1 or 2\n");
    }


    return 0;
}