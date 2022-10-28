#include <stdio.h>
// не работает для gcc и clang

int sum(int n, ...)
{
    int result = 0;

    // получаем указатель на параметр n
    for(int *ptr = &n; n>0; n--)
    {
        result+= *(++ptr);
    }

    return result;
}

int main(void)
{
    printf("sum=%d\n", sum(4, 1, 2, 3, 4));
    printf("sum=%d\n", sum(5, 12, 21, 13, 4, 105));

    return 0;
}
