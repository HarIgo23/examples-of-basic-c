#include <stdio.h>
#include <ctype.h>

#define SIZE 10

char * custom_gets(char * restrict s1);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    printf("Enter word: ");
    custom_gets(s1);
    printf("\n%s\n", s1);
    custom_gets(s2);
    printf("\n%s\n", s2);

    return 0;
}

char * custom_gets(char * restrict s1)
{
    int ch, i = 1;
    while (isspace((ch = getchar())))
        continue;
    s1[0] = (char)ch;
    while (!isspace((ch = getchar())))
    {
        s1[i++] = (char)ch;
    }
    s1[i] = '\0';
    while (getchar() != '\n');

    return s1;
}