#include <stdio.h>

int binary_to_int(char *);

int main(void)
{
    char * pbin1 = "01001001";
    char * pbin2 = "01111011";
    char * pbin3 = "10010010";
    printf("8 == %d\n", binary_to_int("1000"));
    printf("15 == %d\n", binary_to_int("1111"));
    printf("73 == %d\n", binary_to_int(pbin1));
    printf("123 == %d\n", binary_to_int(pbin2));
    printf("146 == %d\n", binary_to_int(pbin3));

    return 1;
}

int binary_to_int(char * s)
{
    int res = 0;
    for (; *s != '\0'; s++, res <<= 1)
        if (*s == '1')
            res += 1;
    res >>= 1;
    return res;
}