// Calculate Total Marks and Average Marks
// The PDF doesn't specify a number of subjects for this particular problem.
// I'll use 3 subjects as a simple example.
#include <stdio.h>
int main()
{
    float mark1, mark2, mark3;
    float total, average;

    printf("Enter mark1, mark2 and mark3 value:");
    scanf("%f %f %f", &mark1, &mark2, &mark3);

    total = mark1 + mark2 + mark3;
    average = total / 3;

    printf("Total = %.2f\n", total);
    printf("average = %.2f\n", average);

    return 0;
}