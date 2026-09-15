// program for even or odd
#include <stdio.h>
int main()
{
    int number;
    printf("Enter a Number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("Even number\n");
    }
    else
    {
        printf("Odd Number\n");
    }
    return 0;
}