#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
    char option = 'p';
    int ch;
    if (argc == 2)
    {
        if (!strcmp(argv[1], "-p"))
            option = 'p';
        else if (!strcmp(argv[1], "-u"))
            option = 'u';
        else if (!strcmp(argv[1], "-l"))
            option = 'l';
        else
        {
            printf("Incorrect argument: %s\n", argv[1]);
            return -1;
        }
    }
    printf("Enter any string: ");

    while ((ch = getchar()) != EOF)
    {
        switch (option) {
            case 'p':
                break;
            case 'u':
                ch = toupper(ch);
                break;
            case 'l':
                ch = tolower(ch);
            default:
                break;
        }
        printf("%c", ch);
    }

    return 0;
}