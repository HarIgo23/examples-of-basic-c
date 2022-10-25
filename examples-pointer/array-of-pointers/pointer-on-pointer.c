#include <stdio.h>

int main(void)
{
    int x = 22;
    int *ptr1;
    int **ptr2;
    ptr1 = &x;
    ptr2 = &ptr1;

    printf("Address of ptr1: %p \n", ptr2);
    printf("Address of x: %p \n", *ptr2);
    printf("Value of x: %d \n", **ptr2);

    return 0;
}
