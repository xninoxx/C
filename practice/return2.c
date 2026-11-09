#include <stdio.h>
#include <stdbool.h>

bool ageCheck(int age) {

    if (age >= 24) {
        return true;
    }
    else {
        return false;
    }
}

double cube(double num) {
    return num * num * num;
}

int main() {

    double x = cube(2); 
    double y = cube(3); 
    double z = cube(4); 

    printf("%.2lf\n", x); 
    printf("%.2lf\n", y); 
    printf("%.2lf\n", z);

    int age = 28;

    if (ageCheck(age)) {
        printf("\nYou may sign up to gambling.com");
    }
    else {
        printf("\nYou must be 24+ to sign up");
    }

    return 0;
}