// 1. Personal Information

// Take input:

// Name
// Age
// Height

// Print them like:

// Name: Tonmoy
// Age: 22
// Height: 5.8

#include <stdio.h>
int main()
{
    char name[10] = "tonmoy";
    int age = 29;
    double height = 5.8;
    printf("Name:%s\n", name);
    printf("Age:%d\n", age);
    printf("Height:%lf\n", height);

    return 0;
}