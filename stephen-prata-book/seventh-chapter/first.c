#include <stdio.h>


int main(void)
{
    int space_counter = 0, new_line_counter = 0, another_char_counter = 0;
    char buffer;

    printf("Enter string: ");
    while (scanf("%c", &buffer) == 1 && buffer != '#')
        if (buffer == ' ')
            space_counter++;
        else if (buffer == '\n')
            new_line_counter++;
        else
            another_char_counter++;
    printf("spaces: %d, new line: %d, other: %d", space_counter, new_line_counter, another_char_counter);

    return 0;
}