// Find the Area of a Triangle
// Formula:
// Area = ½ × base × height
#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base and height value:");
    scanf("%f %f", &base, &height);
    area = 0.5 * base * height;
    printf("the area of a triangle is:%.2f\n", area);
    return 0;
}