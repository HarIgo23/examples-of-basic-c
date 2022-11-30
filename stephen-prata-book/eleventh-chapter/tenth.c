#include <stdio.h>
#include <ctype.h>

#define SIZE 3

char * remove_blank(char * s);

int main(void)
{
    char inp[SIZE];
    printf("Enter word: ");
    while (fgets(inp, SIZE, stdin))
    {
        remove_blank(inp);
        printf("%s\n", inp);
        printf("Enter word: ");
        while (getchar() != '\n')
            continue;
    }

    return 0;
}

char * remove_blank(char * restrict s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isblank(s[i]))
            continue;
        if (s[i+1] == '\0')
        {
            s[i] = '\0';
            break;
        }
        for (int j = i; s[j] != '\0'; j++)
            s[j] = s[j + 1];
    }

    return s;
}