//  Find the Perimeter of a Rectangle
// Formula:
// Perimeter = 2 × (length + width)

#include <stdio.h>
int main()
{
    float length, width, result;
    printf("Enter length width value:");
    scanf("%f %f", &length, &width);
    result = 2 * (length + width);
    printf("the perimeter is %.2f\n", result);
    return 0;
}