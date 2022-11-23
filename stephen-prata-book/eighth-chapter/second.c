#include <stdio.h>

int main(void)
{
    int ch, counter = 0;
    while ((ch = getchar()) != EOF)
    {
        if (ch == 10)
        {
            printf("%s-%-3d\n", "\\n", ch);
            counter = 0;
            continue;
        }
        else if (ch == 9)
        {
            printf("%s-%-3d ", "\\t", ch);
        }
        else if (ch < 32)
        {
            printf("%c%c-%-3d ", '^', ch + 64, ch);
        }
        else
        {
            printf("%c-%-3d ", ch, ch);
        }

        if (++counter == 10)
            printf("\n");
    }

    return 0;
}
