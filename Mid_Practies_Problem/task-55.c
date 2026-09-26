// break
#include <stdio.h>
int main()
{
    int n;

    printf("Enter n value:");
    scanf("%d", &n);

    for (int i = 0; i <= n; i++)
    {
        if (i==7)
        {
            break;
        }
        printf("%d\n", i);
    }
    return 0;
}