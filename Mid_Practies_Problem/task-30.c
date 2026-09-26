// Check scholarship eligibility based on GPA
// The PDF says to check scholarship eligibility based on GPA, but it does not specify the GPA
// threshold or scholarship rule.
// So, to demonstrate the if-else, we'll use GPA 3.50 as an example threshold.
#include <stdio.h>
int main()
{
    float gpa;

    printf("Enter gpa:");
    scanf("%f", &gpa);

    if (gpa >= 3.50)
    {
        printf("Eligible for scholarship\n");
    }
    else
    {
        printf("not eligible for scholarship\n");
    }
    return 0;
}