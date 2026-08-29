// vowel print

// if statement a single cottation use korte hbe double cotation use kora jabe na

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a Alphabet:");
    scanf("%c", &ch);
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
        ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }

    return 0;
}