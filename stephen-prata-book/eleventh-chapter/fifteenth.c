#include <stdio.h>
#include <ctype.h>

int custom_atoi(const char *);

int main(void)
{
    printf("%d\n", custom_atoi("100"));
    printf("%d\n", custom_atoi("100.1"));
    printf("%d\n", custom_atoi("007"));
    return 0;
}

int custom_atoi(const char * s)
{
    int res = 0;
    for (; *s; s++)
    {
        if (!isnumber(*s))
            return 0;
        res = res * 10 + ((int)*s - (int)'0');
    }
    return res;
}