// 8. Voting Eligibility

// Take a person's age.

// If age is 18 or above:

// You can vote

// Otherwise:

// You cannot vote

#include <stdio.h>
int main()
{
    int age;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You can vote\n");
    }
    else
    {
        printf("You cannot vote\n");
    }
    return 0;
}