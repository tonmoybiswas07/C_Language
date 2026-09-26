// Find the Area of a Rectangle
#include <stdio.h>
int main()
{
    int length, width, result;
    printf("Enter length and width value:");
    scanf("%d %d", &length, &width);
    result = length * width;
    printf("total area of rectangle:%d\n", result);
    return 0;
}