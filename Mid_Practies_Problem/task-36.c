// Check whether a character is uppercase or lowercase
#include <stdio.h>
int main()
{
    char ch;

    printf("Enter Alphabet:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Uppercase\n");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lowercase\n");
    }
    else
    {
        printf("Not a alphabet\n");
    }
    return 0;
}