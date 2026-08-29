// 7. Find the Largest of Three Numbers

// Take three integers and find the largest.

// Input:
// 10 35 20

// Output:
// 35 is the largest

#include <stdio.h>
int main()
{
    int a, b, c;
    printf("Enter a and b and c value:");
    scanf("%d %d %d", &a, &b, &c);
    if (a > b && a > c)
    {
        printf("%d is the largest\n", a);
    }
    else if (b > a && b > c)
    {
        printf("%d is the largest\n", b);
    }
    else
    {
        printf("%d is the largest\n", c);
    }
    return 0;
}