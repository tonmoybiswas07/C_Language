// Calculate average marks of five subjects
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    int average;
    printf("Enter the 5 subject marks:");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
    average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5;
    printf("total mark of average:%d \n", average);
    return 0;
}