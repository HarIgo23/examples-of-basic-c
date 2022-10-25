#include <stdio.h>

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b=temp;
}

int main(void)
{
    int x = 100;
    int y = 200;
    printf("x=%d \t y=%d \n", x, y); // => x=100  y=200
    swap(&x, &y);
    printf("x=%d \t y=%d \n", x, y); // => x=200  y=100
    return 0;
}