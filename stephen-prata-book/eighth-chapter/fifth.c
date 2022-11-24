#include <stdio.h>

int main(void)
{
    int response, lower_border = 1, upper_border = 10, guess_number;
    printf("Choose number(1-100) and then answer l(ess) or m(ore) or y(es) when I try to guess: \n");
    guess_number = (lower_border + upper_border) / 2;
    printf("%d\n", guess_number);
    while ((response = getchar()) != 'y')
    {
        if (response == 'l')
        {
            upper_border = guess_number;
        }
        else if (response == 'm')
        {
            lower_border = guess_number;
        }
        else
        {
            printf("Incorrect option %c. Try again: ", response);
            continue;
        }
        while (getchar() != '\n')
            continue;
        guess_number = (lower_border + upper_border) / 2;
        printf("Maybe it: %d\n", guess_number);
    }
    printf("Yeah!\n");

    return 0;
}
