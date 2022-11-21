#include <stdio.h>


int main(void)
{
    int ei_counter = 0;
    char prev, buffer;

    printf("Enter string: ");
    while (scanf("%c", &buffer) == 1 && buffer != '#')
    {
        if (prev == 'e' && buffer == 'i')
            ei_counter++;
        prev = buffer;
    }
    printf("Count of ei: %d\n", ei_counter);

    return 0;
}