#include <stdio.h>


int main(void)
{
    int replace_counter = 0;
    char buffer;

    printf("Enter string: ");
    while (scanf("%c", &buffer) == 1 && buffer != '#')
    {
        switch (buffer)
        {
            case '.':
                printf("!");
                replace_counter++;
                break;
            case '!':
                printf("!!");
                replace_counter++;
                break;
            default:
                printf("%c", buffer);
                break;
        }
    }
    printf("Count of replace: %d\n", replace_counter);

    return 0;
}