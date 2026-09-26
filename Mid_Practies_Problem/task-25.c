// Check whether a number is divisible by both 3 and 5
#include <stdio.h>
int main()
{
    int number;

    printf("Enter number:");
    scanf("%d", &number);

    if (number % 3 == 0 && number % 5 == 0)
    {
        printf("Divisible by both 3 and 5\n");
    }
    else
    {
        printf("Not divisible by both 3 and 5\n");
    }
    return 0;
}