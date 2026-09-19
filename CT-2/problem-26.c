// Find the factorial of N
#include <stdio.h>
int main()
{
    int number;
    long long factorial = 1;
    printf("Enter number:");
    scanf("%d", &number);
    for (int i = 1; i <= number; i++)
    {
        factorial *= i;
    }
    printf("factorial = %lld\n", factorial);
    return 0;
}