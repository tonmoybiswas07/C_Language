// Mini Electricity Bill 🔥🔥

// Calculate an electricity bill based on units.

// Rules:

// 0–100 units → ৳5 per unit
// 101–200 units → ৳7 per unit
// 201+ units → ৳10 per unit

// Example:

// Input:
// 150

// Output:
// Bill = ...

// Important: Think carefully about how the different rates should apply to different ranges.

#include <stdio.h>
int main()
{
    int units;
    printf("Enter your meter unit value:");
    scanf("%d", &units);
    if (units > 0 && units <= 100)
    {
        printf("bill = %d taka\n", units * 5);
    }
    else if (units > 100 && units <= 200)
    {
        printf("bill = %d taka\n", units * 7);
    }
    else
    {
        printf("bill = %d taka\n", units * 10);
    }
    return 0;
}