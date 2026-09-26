// Find the Circumference of a Circle
// Formula:
// Circumference = 2 × π × radius
#include <stdio.h>
int main()
{
    float radius, circumference;
    float pi = 3.1416;
    printf("Enter the radius value:");
    scanf("%f", &radius);
    circumference = 2 * pi * radius;
    printf("The circumference of a circle:%.2f\n", circumference);
    return 0;
}