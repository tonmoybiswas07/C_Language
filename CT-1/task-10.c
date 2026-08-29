// 10. Grade Calculator ⭐

// Take marks and print the grade.

// Marks	Grade
// 80–100	A+
// 70–79	A
// 60–69	B
// 50–59	C
// 40–49	D
// Below 40	F

// Example:

// Input: 75
// Output: Grade A

#include <stdio.h>
int main()
{
    int marks;
    printf("Enter your marks:");
    scanf("%d", &marks);

    if (marks < 100 && marks > 80)
    {
        printf("A+\n");
    }
    else if (marks < 79 && marks > 70)
    {
        printf("A\n");
    }
    else if (marks < 69 && marks > 60)
    {
        printf("B\n");
    }
    else if (marks < 59 && marks > 50)
    {
        printf("C\n");
    }
    else if (marks < 49 && marks > 40)
    {
        printf("D\n");
    }
    else
    {
        printf("Fail\n");
    }

    return 0;
}