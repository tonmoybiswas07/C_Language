// Find the sum of numbers from 1 to 100
#include <stdio.h>
int sum = 0;
int main()
{
    for (int i = 1; i <= 100; i++)
    {
        sum += i;
    }
    printf("total sum is %d\n ", sum);
    return 0;
}