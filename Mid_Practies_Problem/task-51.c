// Find the sum of odd numbers from 1 to N

#include <stdio.h>
int main()
{
    int n, total = 0;

    printf("Enter Number :");
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            total += i;
        }
    }
    printf("total = %d\n", total);
    return 0;
}