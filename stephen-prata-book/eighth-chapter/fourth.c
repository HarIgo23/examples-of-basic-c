#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, word_counter = 0, char_counter = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ispunct(ch))
            continue;
        else if (isspace(ch))
            word_counter++;
        else
            char_counter++;
    }
    printf("word: %d, chars: %d, mean char in word: %d\n",
           word_counter, char_counter, char_counter / word_counter);

    return 0;
}
