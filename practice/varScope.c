#include <stdio.h>

int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y) {
    
    // SCOPE A: This 'result' only exists inside the add() function block
    int result = x + y; 
    return result;
}

int subtract(int x, int y) {
    
    int result = x - y; 
    return result;
}


int main() {

    // SCOPE B: This 'result' only exists inside main(). 
    // Even though both use 'result', they don't clash because they are in different scopes.
    int result = add(5, 10); // LOCAL
    int result2 = subtract(5, 10);

    printf("%d\n", result);
    printf("%d\n", result2);

    return 0;
}