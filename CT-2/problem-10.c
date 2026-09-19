// Check whether a number is greater than 100
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number:");
    scanf("%d", &number);
    if (number > 100)
    {
        printf("Number is greater than 100\n");
    }
    else
    {
        printf("number is not greater than 100\n");
    }
    return 0;
}