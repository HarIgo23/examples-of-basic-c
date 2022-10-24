#include <stdio.h>

int main(void)
{
    int a[5] = {1, 2, 3, 4, 5};
    printf("a[0] = %d\n", *a);

    for (int i = 0;i<5;i++)
    {
        printf("a[%d]: addr=%p, val=%d \n", i, a+i, *(a+i));
    }

    // a++; // нельзя
    int b = 8;
    // a = &b; // тоже нельзя

    return 0;
}
