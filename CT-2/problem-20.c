// Print numbers from 1 to N
#include <stdio.h>
int main()
{
    int number;
    printf("Enter the number");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        printf("%d ", i);
    }
    return 0;
}