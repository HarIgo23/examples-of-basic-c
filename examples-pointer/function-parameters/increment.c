#include <stdio.h>

void increment(int x)
{
    x++;
    printf("in func: %d \n", x); // => 11
}

void increment_pointer(int *x)
{
    (*x)++;
    printf("in func: %d \n", *x); // => 11
}

int main(void)
{
    int a = 10, b = 10;
    increment(a);
    printf("main: %d \n", a); // => 10
    increment_pointer(&b);
    printf("main: %d \n", b); // => 11
    return 0;
}
