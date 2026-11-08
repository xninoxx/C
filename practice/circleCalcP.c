#include <stdio.h>
#include <math.h>

int main() {

    // Circle calculator program (fuck my life (I hate thinking (Even if it's simple)))

    double radius = 0.0;
    double area = 0.0;
    double surfaceArea = 0.0;
    double volume = 0.0;
    const double PI = 3.14159; // Const mean you can't change the variable later in your program

    printf("Enter the radius: ");
    scanf("%lf", &radius);

    area = PI * pow(radius, 2);
    surfaceArea = 4 * PI * pow(radius, 2);
    volume = (4.0 / 3.0) * PI * pow(radius, 3);

    printf("Area: %.2lf\n", area);
    printf("Surface Area: %.2lf\n", surfaceArea);
    printf("Volume: %.2lf\n", volume);

    return 0;
}