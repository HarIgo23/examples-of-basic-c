#include <stdio.h>
#include <ctype.h>

#define SIZE 10

const char * custom_strchr(const char * s1, int c);

int main(void)
{
    char * s = "abcdef";
    const char * res;
    res = custom_strchr(s, 'c');
    printf("%s\n", res);
    res = custom_strchr(s, 'e');
    printf("%s\n", res);

    return 0;
}

const char * custom_strchr(const char * s1, int c)
{
    for (; *s1 != '\0'; s1++)
        if (*s1 == c)
            return s1;
    return NULL;
}