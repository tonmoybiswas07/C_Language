//  Find the sum of odd numbers from 1 to N
#include <stdio.h>
int main()
{
    int n;
    int sum;
    printf("Enter number:");
    scanf("%d", &n);
    for (int i = 0; i <= n; i++)
    {
        if (i % 2 == 1)
        {
            sum += i;
        }
    }
    printf("total = %d\n", sum);
    return 0;
}