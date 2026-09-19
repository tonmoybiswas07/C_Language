// Check whether a character is a vowel or consonant
#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Alphabet:");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}