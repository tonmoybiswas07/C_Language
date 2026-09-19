// Find the sum of numbers from 1 to N
#include <stdio.h>
int main()
{
    int n;
    int sum = 0;
    printf("Enter number:");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        sum += i;
       
    }
    printf("the sum of numbers:%d\n", sum);
    return 0;
}