#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define SIZE 10


int main(void)
{
    printf("Enter string: ");
    bool isword = false;
    int ch, space_counter, au_counter, al_counter, punct_counter, number_counter, word_counter;
    space_counter = au_counter = al_counter = punct_counter = number_counter = word_counter = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isalpha(ch))
        {
            if (isupper(ch))
                au_counter++;
            else
                al_counter++;
            isword = true;
        }
        else if (isnumber(ch))
            number_counter++;
        else if (ispunct(ch))
        {
            punct_counter++;
            if (isword)
            {
                isword = false;
                word_counter++;
            }
        }
        else if (isblank(ch))
        {
            space_counter++;
            if (isword)
            {
                isword = false;
                word_counter++;
            }
        }

    }
    printf("%d, %d, %d, %d, %d, %d",
           space_counter, au_counter, al_counter, punct_counter, number_counter, word_counter);

    return 0;
}