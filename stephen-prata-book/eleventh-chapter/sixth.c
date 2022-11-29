#include <stdio.h>
#include <ctype.h>

#define SIZE 10

int is_within(const char * s1, int c);

int main(void)
{
    char s[] = "abcdef";
    int  res;
    res = is_within(s, 'c');
    printf("%d\n", res);
    res = is_within(s, 'e');
    printf("%d\n", res);
    res = is_within(s, 'x');
    printf("%d\n", res);

    return 0;
}

int is_within(const char * s1, int c)
{
    do
        if (*s1 == c)
            return 1;
    while (*++s1 != '\0');
    return 0;
}