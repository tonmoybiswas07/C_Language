// 3. Basic Calculator

// Take two numbers and print:

// Addition
// Subtraction
// Multiplication
// Division

// Example:

// Input: 20 5

// Addition = 25
// Subtraction = 15
// Multiplication = 100
// Division = 4

#include <stdio.h>
int main()
{
    int a, b, addition, substraction, multiplication, division;
    printf("Enter two number:");
    scanf("%d %d", &a, &b);
    addition = a + b;
    substraction = a - b;
    multiplication = a * b;
    division = a / b;
    printf("addition = %d\n", addition);
    printf("substraction = %d\n", substraction);
    printf("multiplication = %d\n", multiplication);
    printf("division = %d\n", division);
    return 0;
}