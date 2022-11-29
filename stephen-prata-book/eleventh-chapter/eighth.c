#include <stdio.h>
#include <stdbool.h>
#include <string.h>

#define SIZE 10

const char * string_in(const char * s1, const char * s2);

int main(void)
{
    char s[] = "Test string";
    const char * res;
    res = string_in(s, "es");
    printf("%s\n", res);
    res = string_in(s, "str");
    printf("%s\n", res);
    res = string_in(s, "tel");
    printf("%s\n", res);

    return 0;
}

const char * string_in(const char * s1, const char * s2)
{
    bool flag = false;
    while (*s1 != '\0')
    {
        if (*s1++ == *s2)
        {
            flag = true;
            for (const char * ptr = s2 + 1; *ptr != '\0'; ptr++, s1++)
                if (*ptr != *s1)
                {
                    flag = false;
                }
            if (flag)
                return s1 - strlen(s2);
        }
    }
    return NULL;
}