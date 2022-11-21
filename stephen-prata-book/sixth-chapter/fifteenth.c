#include <stdio.h>
#include <string.h>

#define SIZE 255

int main(void)
{
    char str[SIZE];
    int ind = 0;

    printf("Enter string: ");
    while (scanf("%c", &str[ind]) == 1 && str[ind] != '\n')
        ind++;
    str[ind] = '\0';

    for (int i = ind - 1; i >= 0; i--)
        printf("%c ", str[i]);
    printf("\n");

    return 0;
}