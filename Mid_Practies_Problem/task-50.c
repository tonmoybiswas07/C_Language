// Find the sum of numbers from 1 to 100

#include <stdio.h>
int main()
{
    int total = 0;
    for (int i = 0; i <= 100; i++)
    {
        total += i;
    }
    printf("total is = %d\n", total);
    return 0;
}