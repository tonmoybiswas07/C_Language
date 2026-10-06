// reverse a number
#include <stdio.h>
int main()
{
    int number, reverse=0, rem;
    printf("Enter a number");
    scanf("%d", &number);
    while (number != 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    printf("reverse number is %d\n", reverse);
    return 0;
}