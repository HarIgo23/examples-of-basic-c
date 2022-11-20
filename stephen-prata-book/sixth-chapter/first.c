#include <stdio.h>

#define SIZE 26

int main(void)
{
    char alphabet[SIZE + 1], ch = 'a';
    alphabet[SIZE] = '\0';

    for (int i = 0; i < SIZE; i++, ch++)
        alphabet[i] = ch;
    for (int i = 0; i < SIZE; i++)
        printf("%c ", alphabet[i]);
    printf("\n");
    printf("%s\n", alphabet);

    return 0;
}