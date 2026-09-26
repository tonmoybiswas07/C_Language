// Find the Area of a Square
// Formula:
// Area = side × side
#include <stdio.h>
int main()
{
    float side, square;
    printf("Enter side value:");
    scanf("%f", &side);
    square = side * side;
    printf("total area of square:%.2f\n", square);
    return 0;
}