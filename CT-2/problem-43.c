// print sum of five to fifty including 5 and 50
#include <stdio.h>
int main()
{
    int sum = 0;
    for (int i = 5; i <= 50; i++)
    {
        sum += i;
    }
    printf("total sum of number is %d\n", sum);
    return 0;
}