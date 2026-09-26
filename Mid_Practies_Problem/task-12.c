//  Convert Hours to Minutes
// Formula:
// 1 hour = 60 minutes
#include <stdio.h>
int main()
{
    float hours, minutes;

    printf("Enter hours value:");
    scanf("%f", &hours);

    minutes = hours * 60;

    printf("minutes = %.2f\n", minutes);
    return 0;
}