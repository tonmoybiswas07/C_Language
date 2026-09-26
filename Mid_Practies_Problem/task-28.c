// Marks and Grade
// Your PDF specifies 40 as the pass mark and gives this grading scale: 80–100 = A+, 70–79 = A,
// 60–69 = B, 50–59 = C, 40–49 = D, 0–39 = F.
// 11. Check whether a student has passed or failed
#include <stdio.h>
int main()
{
    int marks;

    printf("Enter marks:");
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