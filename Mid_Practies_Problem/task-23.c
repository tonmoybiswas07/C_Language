// Check whether two numbers are equal
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter a and b value:");
    scanf("%d %d", &a, &b);

    if (a == b)
    {
        printf("two numbers are equal\n");
    }
    else
    {
        printf("two numbers are not equal\n");
    }
    return 0;
}