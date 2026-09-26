// Find the highest marks among three subjects
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3;

    printf("Enter marks of 3 subject:");
    scanf("%d %d %d", &mark1, &mark2, &mark3);

    if (mark1 > mark2 && mark1 > mark3)
    {
        printf("highest = %d\n", mark1);
    }
    else if (mark2 > mark1 && mark2 > mark3)
    {
        printf("highest = %d\n", mark2);
    }
    else
    {
        printf("highest = %d\n", mark3);
    }
    return 0;
}