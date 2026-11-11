#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// STRUCT & TYPEDEF:
// - A struct is a custom container that bundles multiple pieces of related information together 
//   (similar to objects/classes in other languages, but without methods).
// - Using 'typedef' lets us create an alias ('Student') so we don't have to keep 
//   typing the keyword 'struct' every time we declare a variable of this type.
typedef struct {
    char name[50];
    int age;
    float gpa;
    bool isFullTime;
} Student;

void printStudent(Student student);

int main() {

    // INITIALIZATION:
    // Creating struct instances and populating fields in order using curly braces {}
    Student student1 = {"Nino", 16, 4.2, true};
    Student student2 = {"Patrick", 36, 1.0, false};
    Student student3 = {"Squidward", 48, 3.2, false};
    
    // Initializing all fields to zero/empty first
    Student student4 = {0};

    // DOT NOTATION & STRING COPYING:
    // Because arrays cannot be assigned directly with '=' after declaration, 
    // we use strcpy() for the name string, and the dot operator (.) for other fields.
    strcpy(student4.name, "Sandy");
    student4.age = 27;
    student4.gpa = 4.0;
    student4.isFullTime = true;

    // Passing struct instances into a function
    printStudent(student1);
    printStudent(student2);
    printStudent(student3);
    printStudent(student4);

    return 0;
}

// PASSING STRUCTS TO FUNCTIONS:
// The function receives a copy of the Student struct. 
// We use the dot operator (.) to access individual properties/members inside the struct.
void printStudent(Student student) {
    printf("Name: %s\n", student.name);
    printf("Age: %d\n", student.age);
    printf("GPA: %.1f\n", student.gpa);
    // Using a ternary operator to print a readable string for the boolean value
    printf("Full-time: %s\n", (student.isFullTime) ? "Yes" : "No");
    printf("\n");
}