// Calculate total marks of five subjects
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    int total;
    printf("Enter 5 subject marks:");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
    total = mark1 + mark2 + mark3 + mark4 + mark5;
    printf("total mark is %d\n", total);
    return 0;
}