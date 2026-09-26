// Check whether a character is an alphabet
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter Alphabet:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z' || ch >= 'a' && ch <= 'z')
    {
        printf("Alphabet\n");
    }
    else
    {
        printf("Not Alphabet\n");
    }
    return 0;
}