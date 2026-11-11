#include <stdio.h>

// ENUM (Enumeration):
// A user-defined data type consisting of a set of named integer constants.
// Benefits: Replaces magic numbers with readable names (e.g., SUNDAY = 1 instead of just 1).
// By default, C assigns numbers starting from 0 (SUCCESS = 0, FAILURE = 1, PENDING = 2),
// but you can also explicitly assign values like we did for Day (SUNDAY = 1, etc.).
typedef enum {
    SUNDAY = 1, MONDAY = 2, TUESDAY = 3, WEDNESDAY = 4, 
    THURSDAY = 5, FRIDAY = 6, SATURDAY = 7
} Day;

typedef enum {
    SUCCESS, FAILURE, PENDING
} Status;

void connectStatus(Status status);

int main() {

    Day today = SATURDAY;

    // Checks if today matches weekend values using the readable enum names
    if (today == SUNDAY || today == SATURDAY) {
        printf("It's the weekend\n");
    }
    else {
        printf("It's a weekday\n");
    }

    Status status = PENDING;

    connectStatus(status);

    return 0;
}

void connectStatus(Status status) {

    // Enums pair exceptionally well with switch statements 
    // to handle different named states clearly.
    switch (status) {
        case SUCCESS:
            printf("Connection was successful\n");
            break;   
        case FAILURE:
            printf("Connection was unsuccessfull\n");
            break;   
        case PENDING:
            printf("Connection is pending..\n");
            break;   
    }
}