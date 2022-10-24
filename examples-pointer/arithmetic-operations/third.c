#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 23;
    int *pa = &a;
    int *pb = &b;
    int c = pa - pb;
    printf("pa=%p \n", pa); // => pa=0060FEA0
    printf("pb=%p \n", pb); // => pb=0060FE9C
    printf("c=%d \n", c);   // => c=1 - находятся рядом
}
