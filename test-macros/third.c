#include <stdio.h>

#define num int
#define swap(t, x, y) { t temp = x; x = y; y=temp;}

int main(void)
{
    num x = 4;num y = 10;
    printf("x=%d, y=%d\n", x, y);
    swap(num, x, y)
    printf("x=%d, y=%d\n", x, y);
    return 0;
}
