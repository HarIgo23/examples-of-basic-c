#include <stdio.h>

void to_base_n(unsigned number, int base);


int main(void)
{
    to_base_n(3, 2);
    printf("\n");
    to_base_n(6, 2);
    printf("\n");
    to_base_n(21, 2);
    printf("\n");

    to_base_n(3, 8);
    printf("\n");
    to_base_n(8, 8);
    printf("\n");
    to_base_n(21, 8);
    printf("\n");
    to_base_n(129, 8);
    printf("\n");

    return 0;
}

void to_base_n(unsigned number, int base) {
    int r;
    r = number % base;
    if (number >= base)
        to_base_n(number / base, base);
    printf("%d", r);
}
