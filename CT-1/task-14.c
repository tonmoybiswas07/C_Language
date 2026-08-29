// 15. Temperature Converter

// Take Celsius temperature and convert it to Fahrenheit.

// Formula:

// F = (C × 9 / 5) + 32

// Example:

// Input:
// 25

// Output:
// 77 F

#include <stdio.h>
int main()
{
    int c, f;
    printf("Enter celcius value:");
    scanf("%d", &c);
    f = (c * 9 / 5) + 32;
    printf("%d F\n", f);

    return 0;
}