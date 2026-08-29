// 9. Pass or Fail

// Take a student's marks.

// Rules:

// 40+ → Pass
// Below 40 → Fail

// Example:

// Input: 65
// Output: Pass

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);
    if (marks > 40)
    {
        printf("Pass\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}