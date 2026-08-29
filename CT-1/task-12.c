// 12. Leap Year ⭐

// Take a year and determine whether it is a leap year.

// Example:

// Input: 2024
// Output: Leap Year

// Try to figure out the condition yourself.

#include <stdio.h>
int main()
{
    int year;
    printf("Enter a year:");
    scanf("%d", &year);
    if (year % 4 == 0)
    {
        printf("Leap Year\n");
    }
    else
    {
        printf("Not Leap Year\n");
    }

    return 0;
}