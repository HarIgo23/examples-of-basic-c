#include <stdio.h>

int main(void)
{
    int x = 10;
    int *p = &x;
    printf("Addr = %p \n", p); // 0x16b8bb70c или 16b8bb70c
    printf("x = %d \n", *p);
    int y = *p;
    printf("y = %d \n", y);
    *p = 45;
    printf("x = %d \n", x);
    printf("y = %d \n", y);
    printf("addr x = %p, addr y = %p", &x, &y);
    return 0;
}
