// Check whether a number is zero or non-zero
#include <stdio.h>
int main()
{
    int number;

    printf("Enter a number:");
    scanf("%d", &number);

    if (number == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Non-Zero\n");
    }
    return 0;
}