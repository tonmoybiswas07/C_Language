// Convert Fahrenheit to Celsius
// Formula:
// Celsius = (Fahrenheit - 32) × 5/9
#include <stdio.h>
int main()
{
    float fahrenheit, celsius;

    printf("Enter fahrenheit value:");
    scanf("%f", &fahrenheit);

    celsius = (fahrenheit - 32) * 5 / 9;

    printf("the celsius value is:%.2f\n", celsius);
    return 0;
}