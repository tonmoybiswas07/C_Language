// Convert Minutes to Seconds
// Formula:
// 1 minute = 60 seconds
#include <stdio.h>
int main()
{
    float minute, seconds;

    printf("Enter minute value:");
    scanf("%f", &minute);

    seconds = minute * 60;

    printf("seconds = %.2fs\n", seconds);
    return 0;
}