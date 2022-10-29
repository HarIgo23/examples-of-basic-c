#include <stdio.h>

union code
{
    int digit;
    char letter;
};

int main(void)
{
        union code id;
        id.digit = 120;
        printf("%d - %c \n", id.digit, id.letter);  // => 120 - x
        printf("%d - %d \n", id.digit, id.letter);  // => 120 - 120
        id.letter = 87;
        printf("%d - %c \n", id.digit, id.letter);  // => 87 - W
        id.letter = 'e';
        printf("%d - %c \n", id.digit, id.letter);  // => 101 - e
        return 0;
}
