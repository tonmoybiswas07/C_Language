// 4. Even or Odd ⭐

// Take an integer and determine whether it is Even or Odd.

// Example:

// Input: 17
// Output: Odd
#include <stdio.h>
int main()
{
    int num;
    printf("Enter a value:");
    scanf("%d", &num);
    if (num % 2 == 0)
    {
        printf("Even Number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}