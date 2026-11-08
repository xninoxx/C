#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// We can use math functions in C

int main() {

    int a = 9;
    int b = 2;
    float c = 3.14;
    float d = 5.24;
    float e = 8.96;
    int f = -5;
    float g = 3;
    float h = 45;
    float i = 45;
    float j = 45;

    // Get's the square root of a
    a = sqrt(a);

    // Raises b to the power of 3
    b = pow(b, 3);

    // Rounds c
    c = round(c);

    // Rounds d up
    d = ceil(d);

    // Rounds e down
    e = floor(e);

    // Changes negative values to positive values
    f = abs(f);

    // Calculates the natural logarithm (base e) of g (this math shit is confusing as hell)
    g = log(g);

    // Calculates the sine of h
    h = sin(h);

    // Calculates the cosine
    i = cos(i);

    // Calculates the tangent of j
    j = tan(j);

        // I hate sine, cosine and tangents

    printf("%d\n", a);
    printf("%d\n", b);
    printf("%f\n", c);
    printf("%f\n", d);
    printf("%f\n", e);
    printf("%d\n", f);
    printf("%f\n", g);
    printf("%f\n", h);
    printf("%f\n", i);
    printf("%f\n", j);

    return 0;
}