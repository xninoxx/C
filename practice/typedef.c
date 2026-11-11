#include <stdio.h>

typedef int Number;
typedef char String[50];
typedef char Initials[3];

int main() {

    // typedef = reserved keyword that gives an existing datatype a "nickname"
    //           Helps simplify complex types and improves code readability

    //           typedef existing_type new_name;

    Number x = 3;
    Number y = 4;
    Number z = x + y;
    printf("%d\n", z);

    String name = "Nino Wolfsen";
    printf("%s\n", name);

    Initials user1 = "NW";
    Initials user2 = "WD";
    Initials user3 = "MP";
    Initials user4 = "HT";

    printf("%s\n", user1);
    printf("%s\n", user2);
    printf("%s\n", user3);
    printf("%s\n", user4);

    return 0;
}