// repeat reverse
#include <stdio.h>
int main()
{
    int number, digit, reverse = 0;

    printf("Enter number:");
    scanf("%d", &number);

    while (number != 0)
    {
        digit = number % 10;
        reverse = reverse * 10 + digit;
        number = number / 10;
    }
    printf("reverse = %d\n", reverse);
    return 0;
}