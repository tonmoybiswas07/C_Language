// 🟡 Level 2 — Conditional Statements
// 6. Find the Larger Number

// Take two numbers and print the larger one.

// Input:
// 25 40

// Output:
// 40 is larger

#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter value a and b:");
    scanf("%d %d", &a, &b);
    if (a > b)
    {
        printf("%d is larger\n", a);
    }
    else
    {
        printf("%d is larger\n", b);
    }
    return 0;
}