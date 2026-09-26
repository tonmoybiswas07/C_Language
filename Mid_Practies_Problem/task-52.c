// Find the sum of multiples of 5 from 1 to N
#include <stdio.h>
int main()
{
    int n, total = 0;

    printf("Enter number:");
    scanf("%d", &n);

    for (int i = 5; i <= n; i += 5)
    {
        total += i;
    }
    printf("total is = %d\n", total);
    return 0;
}