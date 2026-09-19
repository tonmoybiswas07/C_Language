// Check whether a student has passed all subjects
// Assume 40 is the pass mark for each subject.
#include <stdio.h>
int main()
{
    int mark1, mark2, mark3, mark4, mark5;
    printf("Enter 5 subject marks:");
    scanf("%d %d %d %d %d", &mark1, &mark2, &mark3, &mark4, &mark5);
    if (mark1 >= 40 && mark2 >= 40 && mark3 >= 40 && mark4 >= 40 && mark5 >= 40)
    {
        printf("All subject pass\n");
    }
    else
    {
        printf("failed\n");
    }
    return 0;
}