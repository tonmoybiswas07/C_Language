// Convert Meters to Centimeters
// Formula:
// 1 meter = 100 centimeters
#include <stdio.h>
int main()
{
    float meters, centimeters;

    printf("Enter meter value:");
    scanf("%f", &meters);

    centimeters = meters * 100;

    printf("the centimeters value is:%.2f\n", centimeters);
    return 0;
}