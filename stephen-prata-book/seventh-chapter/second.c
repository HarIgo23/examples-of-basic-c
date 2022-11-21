#include <stdio.h>


int main(void)
{
    int counter = 0;
    char buffer;

    printf("Enter string: ");
    while (scanf("%c", &buffer) == 1 && buffer != '#')
    {
        printf("%c-%-3d ", buffer, buffer);
        if (++counter % 8 == 0)
        {
            printf("\n");
            counter = 0;
        }
    }

    return 0;
}