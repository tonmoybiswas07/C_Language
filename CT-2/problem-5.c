// Find the smallest of two numbers
#include <stdio.h>
int main()
{
    int num1, num2;
    printf("Enter the number 1 & 2:");
    scanf("%d %d", &num1, &num2);
    if (num1 < num2)
    {
        printf("%d is the smallest\n", num1);
    }
    else if (num2 < num1)
    {
        printf("%d is the smallest\n", num2);
    }
    else
    {
        printf("both are equals\n");
    }
    return 0;
}