#include <stdio.h>


int main(void)
{
    int replace_counter = 0;
    char buffer;

    printf("Enter string: ");
    while (scanf("%c", &buffer) == 1 && buffer != '#')
    {
        if (buffer == '.')
            printf("!");
        else if (buffer == '!')
            printf("!!");
        else
        {
            printf("%c", buffer);
            continue;
        }
        replace_counter++;
    }
    printf("Count of replace: %d\n", replace_counter);

    return 0;
}