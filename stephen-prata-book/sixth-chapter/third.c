#include <stdio.h>

#define START_CHAR 'F'

int main(void)
{
    for (int i = 1; i <= 6; i++)
    {
        for(int j = 0; j < i; j++)
            printf("%c", START_CHAR - j);
        printf("\n");
    }
    return 0;
}