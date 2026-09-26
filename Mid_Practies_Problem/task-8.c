// Convert Celsius to Fahrenheit
// Formula:
// Fahrenheit = (Celsius × 9/5) + 32

#include <stdio.h>
int main()
{
    float celsius, fahrenheit;

    printf("Enter celsius value:");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("the fahrenheit value is :%.2f\n", fahrenheit);
    return 0;
}