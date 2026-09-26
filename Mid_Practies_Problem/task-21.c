// Find the largest of two numbers
#include <stdio.h>
int main()
{
    int number1, number2;

    printf("Enter number1 and number2:");
    scanf("%d %d", &number1, &number2);

    if (number1 > number2)
    {
        printf("The largest number is %d\n", number1);
    }
    else if (number2 > number1)
    {
        printf("the lagest number is %d\n", number2);
    }
    else
    {
        printf("both numbers are equals\n");
    }
    return 0;
}