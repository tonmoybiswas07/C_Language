// Find the Area of a Circle
// Formula:
// Area = π × radius × radius
#include <stdio.h>
int main()
{
    float radius, area;
    float pi = 3.1416;
    printf("Enter the radius value:");
    scanf("%f", &radius);
    area = pi * radius * radius;
    printf("the area of a circle is:%.2f\n", area);
    return 0;
}