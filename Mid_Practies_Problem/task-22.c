// Find the smallest of two numbers
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter a and b value:");
    scanf("%d %d", &a, &b);

    if (a < b)
    {
        printf("the smallest number is %d\n", a);
    }
    else if (b < a)
    {
        printf("the smallest number is %d\n", b);
    }
    else
    {
        printf("both are equals\n");
    }
    return 0;
}