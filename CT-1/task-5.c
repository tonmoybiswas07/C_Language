// 5. Positive, Negative, or Zero

// Take a number and determine whether it is:

// Positive
// Negative
// Zero

#include <stdio.h>
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num > 0)
    {
        printf("Positive\n");
    }
    else if (num < 0)
    {
        printf("Negative\n");
    }
    else
    {
        printf("Zero\n");
    }
    return 0;
}