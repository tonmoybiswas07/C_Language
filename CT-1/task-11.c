// 🟠 Level 3 — Operators + Conditions
// 11. Divisible by 5 and 3

// Take an integer and check whether it is divisible by both 5 and 3.

// Example:

// Input: 30
// Output: Divisible by both 5 and 3

#include <stdio.h>
int main()
{
    int number;
    printf("Enter number :");
    scanf("%d", &number);
    if (number % 5 == 0 && number % 3 == 0)
    {
        printf("Divisible by both 5 and 3\n");
    }
    else
    {
        printf("Not divisible by both 5 and 3\n");
    }
    return 0;
}