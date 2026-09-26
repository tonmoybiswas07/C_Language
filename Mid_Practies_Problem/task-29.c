// // Find the grade of a student from marks
//  80–100 = A+, 70–79 = A,
// 60–69 = B, 50–59 = C, 40–49 = D, 0–39 = F.
#include <stdio.h>
int main()
{
    int marks;

    printf("Enter marks:");
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("A+\n");
    }
    else if (marks >= 70)
    {
        printf("A\n");
    }
    else if (marks >= 60)
    {
        printf("B\n");
    }
    else if (marks >= 50)
    {
        printf("C\n");
    }
    else if (marks >= 40)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
    return 0;
}