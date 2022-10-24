#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    int *pa = a;
    int a2 = *(pa+2);
    printf("a[2] = %d\n", a2); // 3

    for (int *ptr=a; ptr<=&a[4]; ptr++)
    {
        printf("addr=%p, val=%d \n", ptr, *ptr);
    }

    return 0;
}

