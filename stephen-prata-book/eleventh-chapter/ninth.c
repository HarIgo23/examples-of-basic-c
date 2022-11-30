#include <stdio.h>
#include <string.h>

#define SIZE 5

char * reverse(char *);

int main(void)
{
    char s1[SIZE] = "abcd";
    char s2[SIZE] = "xyz";
    reverse(s1);
    printf("%s\n", s1);
    reverse(s2);
    printf("%s\n", s2);

    return 0;
}

char * reverse(char * s)
{
    size_t n = strlen(s), last_index = n - 1;
    unsigned first_index = 0;
    char temp;

    for (int i = 0; i < n/2; i++)
    {
        temp = s[first_index];
        s[first_index++] = s[last_index];
        s[last_index--] = temp;
    }

    return s;
}