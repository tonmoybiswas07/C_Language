//  Print numbers divisible by 4 from 1 to N
#include <stdio.h>
int main()
{
    int n;

    printf("Enter n value:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i % 4 == 0)
        {
            printf("%d ", i);
        }
    }
    return 0;
}