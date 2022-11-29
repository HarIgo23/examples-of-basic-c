#include <stdio.h>

#define SIZE 10

char * custom_gets(char * restrict s1, int n);

int main(void)
{
    char s[SIZE];
    printf("Enter string: ");
    custom_gets(s, SIZE-1);
    printf("\n%s\n", s);

    return 0;
}

char * custom_gets(char * restrict s1, int n)
{
    int ch;
    for (int i = 0; i < n; i++)
    {
        if ((ch = getchar()) != EOF)
        {
            s1[i] = (char)ch;
        }
        else
        {
            s1[i] = '\0';
            break;
        }
    }

    return s1;
}