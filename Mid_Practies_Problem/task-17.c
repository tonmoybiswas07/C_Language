// Find the Average of Three Numbers
// This is similar to Chapter 1's average problem and is also listed as #20 in Chapter 2.
#include <stdio.h>
int main()
{
    int a, b, c, avg;

    printf("Enter a b c value:");
    scanf("%d %d %d", &a, &b, &c);

    avg = (a + b + c) / 3;

    printf("the average of total three numbers:%d\n", avg);
    return 0;
}