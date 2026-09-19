// Check whether a student has passed or failed
// Pass mark = 40

#include <stdio.h>
int main()
{
    int mark;
    printf("Enter the mark value:");
    scanf("%d", &mark);
    if (mark > 40)
    {
        printf("Passed\n");
    }
    else
    {
        printf("Failed\n");
    }
    return 0;
}