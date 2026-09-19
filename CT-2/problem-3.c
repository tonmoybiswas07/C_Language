// Check whether a number is zero or non-zero
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number == 0)
    {
        printf("Zero\n");
    }
    else
    {
        printf("Not Zero\n");
    }
    return 0;
}