//  Find the sum of numbers from 1 to N

#include <stdio.h>
int main()
{
    int n;
    int total = 0;

    printf("Enter n value:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        total += i;
    }
    printf("total = %d\n", total);
    return 0;
}