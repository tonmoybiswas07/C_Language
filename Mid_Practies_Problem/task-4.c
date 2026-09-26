// Find the Perimeter of a Square
// Formula:
// Perimeter = 4 × side
#include<stdio.h>
int main(){
    float side,perimeter;
    printf("Enter side value:");
    scanf("%f", &side);
    perimeter = 4 * side;
    printf("the perimeter of a square is :%lf\n",perimeter);
    return 0;
}