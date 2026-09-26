// Convert Kilometers to Meters
// Formula:
// 1 kilometer = 1000 meters
#include <stdio.h>
int main()
{
    float kilometer, meters;

    printf("Enter kilometer value:");
    scanf("%f", &kilometer);

    meters = kilometer * 1000;

    printf("the meters value:%.2f\n", meters);
    return 0;
}
