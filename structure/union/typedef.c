#include <stdio.h>

typedef union code
{
    int digit;
    char letter;
} secret_code;

int main(void)
{
    secret_code id = {97};
    printf("%d - %c \n", id.digit, id.letter);

    return 0;
}
