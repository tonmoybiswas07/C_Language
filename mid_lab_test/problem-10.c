//  count digit
#include <stdio.h>
int main()
{
    int number, count = 0;
    printf("Enter a number");
    scanf("%d", &number);

    while (number != 0)
    {
        number = number / 10;
        count++;
    }
    printf("count of digit is %d\n", count);
    return 0;
}