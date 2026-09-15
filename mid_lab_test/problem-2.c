// eligible or not eligible to vote
#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age:");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("you can eligible to vote\n");
    }
    else
    {
        printf("you cannot eligible to vote\n");
    }
    return 0;
}