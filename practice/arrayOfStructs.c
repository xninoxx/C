#include <stdio.h>

typedef struct {
    char model[25];
    int year;
    int price;
} Car;

int main() {

    // ARRAY OF STRUCTS: 
    // An array where each element is an entire struct instance.
    // Perfect for organizing collections of related records (like database rows).
    Car cars[] = {{"Mustang", 2025, 32000},
                  {"Corvette", 2026, 68000},
                  {"Challenger", 2024, 29000}};

    // Calculates the number of elements in the array:
    // Total bytes of the array / bytes of a single struct element (Car).
    int number = sizeof(cars) / sizeof(cars[0]);

    // Iterates through each struct in the array using index [i]
    for (int i = 0; i < number; i++) {
        printf("%s %d $%d\n", cars[i].model, cars[i].year, cars[i].price);
    }

    return 0;
}