// Calculate an electricity bill using if-else
// The PDF only says "Calculate an electricity bill using if-else" and doesn't provide the unit
// slabs/rates.
// So here's a practice example with sample slabs:
// • First 100 units → 5 per unit
// • Next 100 units → 7 per unit
// • Above 200 units → 10 per unit
#include <stdio.h>
int main()
{
    int units;
    float bills;

    printf("Enter your units:");
    scanf("%d", &units);

    if (units <= 100)
    {
        bills = units * 5;
    }
    else if (units >= 101 && units <= 200)
    {
        bills = units * 7;
    }
    else if (units >= 201)
    {
        bills = units * 10;
    }
    printf("total bill is: %f\n", bills);
    return 0;
}