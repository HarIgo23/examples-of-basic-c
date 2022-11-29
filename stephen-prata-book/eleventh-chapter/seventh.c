#include <stdio.h>

#define SIZE 10

char * custom_gets(char * restrict s1, const char * restrict s2, int n);

int main(void)
{
    char s1[SIZE];
    char s2[SIZE];
    custom_gets(s1, "test_str", SIZE-1);
    printf("%s\n", s1);
    custom_gets(s2, "aaaaaaaaaaaa", 5);
    printf("%s\n", s2);

    return 0;
}

char * custom_gets(char * restrict s1, const char * restrict s2, int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (s2[i])
            s1[i] = s2[i];
        else
            break;
    }
    s1[i] = '\0';

    return s1;
}