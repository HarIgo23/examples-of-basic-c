#include <stdio.h>
#include <ctype.h>

int alphabet_order(int ch);

int main(void)
{
    int ch, order;
    while ((ch = getchar()) != EOF) {
        order = alphabet_order(ch);
        if (order == -1)
            printf("%c is not alpha\n", ch);
        else
            printf("%c is alpha and it order is %d\n", ch, order);
        while (getchar() != '\n')
            continue;
    }

    return 0;
}

int alphabet_order(int ch)
{
    if (isalpha(ch))
        return ch - 'a' + 1;
    return -1;
}
