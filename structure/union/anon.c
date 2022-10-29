#include <stdio.h>

union
{
    int digit;
    char letter;
} id1, id2;

int main(void)
{
    id1.letter = 'c';
    id2.digit = 84;
    printf("%d - %c \n", id1.digit, id1.letter);
    printf("%d - %c \n", id2.digit, id2.letter);

    return 0;
}

