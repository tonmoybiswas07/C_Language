// biggest number
#include <stdio.h>
int main()
{
    int number1, number2, number3;
    printf("Enter three numbers value:");
    scanf("%d %d %d", &number1, &number2, &number3);
    if (number1 > number2 && number1 > number3)
    {
        printf("%d is the biggest number\n", number1);
    }
    else if (number2 > number1 && number2 > number3)
    {
        printf("%d is the biggest number\n", number2);
    }
    else
    {
        printf("%d is the biggest number\n", number3);
    }
    return 0;
}