// Check whether a person is eligible to vote based on age
#include <stdio.h>
int main()
{
    int age;

    printf("Enter age:");
    scanf("%d", &age);

    age >= 18 ? printf("you can vote\n") : printf("you can not vote\n");
    return 0;
}