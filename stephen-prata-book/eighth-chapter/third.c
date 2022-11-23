#include <stdio.h>
#include <ctype.h>

int main(void)
{
    int ch, u_counter = 0, l_counter = 0, counter = 0;
    while ((ch = getchar()) != EOF)
    {
        if (isupper(ch))
            u_counter++;
        else if (islower(ch))
            l_counter++;
        else
            counter++;
    }
    printf("u: %d, l: %d, o: %d\n", u_counter, l_counter, counter);

    return 0;
}
