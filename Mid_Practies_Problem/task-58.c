// panildrome checker
#include <stdio.h>
int main()
{
    int number, orginal, reverse = 0, rem;

    printf("Enter number:");
    scanf("%d", &number);

    orginal = number;

    while (number != 0)
    {
        rem = number % 10;
        reverse = reverse * 10 + rem;
        number = number / 10;
    }
    if (orginal == reverse)
    {
        printf("Its panildrome\n");
    }
    else
    {
        printf("Its not a panildrome\n");
    }
    return 0;
}