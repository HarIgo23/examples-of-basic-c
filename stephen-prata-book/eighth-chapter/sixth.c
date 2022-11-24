#include <stdio.h>
#include <ctype.h>

char get_first(void);

int main(void)
{
    printf("Enter string: ");
    printf("First not space symbol: %c\n", get_first());

    return 0;
}

char get_first(void)
{
    int ch;
    while (isspace(ch = getchar()))
        continue;
    return (char)ch;
}
