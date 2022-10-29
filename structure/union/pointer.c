#include <stdio.h>

union code
{
    int digit;
    char letter;
};

int main(void)
{
    union code id = {45};

    union code *p_id = &id;
    printf("%d - %c \n", p_id->digit, p_id->letter);

    p_id->digit = 89;
    printf("%d - %c \n", (*p_id).digit, (*p_id).letter);

    return 0;
}
