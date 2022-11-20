#include <stdio.h>

#define START_CHAR 'A'

int main(void)
{
    char first = START_CHAR;
    for (int i = 1; i <= 6; i++)
    {
        for(int j = 0; j < i; j++)
            printf("%c", first++);
        printf("\n");
    }
    return 0;
}