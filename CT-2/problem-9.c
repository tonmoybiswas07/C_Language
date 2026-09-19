// Check whether a number is between 10 and 50
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number value:");
    scanf("%d", &number);
    if (number >= 10 && number <= 50)
    {
        printf("Number between 10 and 50\n");
    }
    else
    {
        printf("Number is not between 10 and 50\n");
    }
    return 0;
}