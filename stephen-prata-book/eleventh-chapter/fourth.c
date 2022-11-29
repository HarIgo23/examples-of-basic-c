#include <stdio.h>
#include <ctype.h>

#define SIZE 10

char * custom_gets(char * restrict s1, int n);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    printf("Enter word: ");
    custom_gets(s1, SIZE-1);
    printf("\n%s\n", s1);
    custom_gets(s2, SIZE-1);
    printf("\n%s\n", s2);

    return 0;
}

char * custom_gets(char * restrict s1, int n)
{
    int ch;
    while (isspace((ch = getchar())))
        continue;
    s1[0] = (char)ch;
    for (int i = 1; i < n; i++)
    {
        if (!isspace((ch = getchar())))
        {
            s1[i] = (char)ch;
        }
        else
        {
            s1[i] = '\0';
            break;
        }
    }
    while (getchar() != '\n');

    return s1;
}