#include <stdio.h>

int main(void)
{
    int a1 = 10;
    int *pa1 = &a1;
    printf("pa: address=%p \t value=%d \n", pa1, *pa1);   // pa: address=0x16f0fb6dc    value=10
    int b = *pa1++;
    printf("b: value=%d \n", b);                          // b: value=10
    printf("pa: address=%p \t value=%d \n\n", pa1, *pa1); // pa: address=0x16f0fb6e0    value=1863301168

    int a2 = 10;
    int *pa2 = &a2;
    printf("pa: address=%p \t value=%d \n", pa2, *pa2);   // pa: address=0x16b67b6c8  value=10
    b = (*pa2)++;
    printf("b: value=%d \n", b);                          // b: value=10
    printf("pa: address=%p \t value=%d \n\n", pa2, *pa2); // pa: address=0x16b67b6c8    value=11

    int a3 = 10;
    int *pa3 = &a3;
    printf("pa: address=%p \t value=%d \n", pa3, *pa3);   // pa: address=0x16b67b6bc    value=10
    b = ++*pa3;
    printf("b: value=%d \n", b);                          // b: value=11
    printf("pa: address=%p \t value=%d \n\n", pa3, *pa3); // pa: address=0x16b67b6c0    value=11

    int a4 = 10;
    int *pa4 = &a4;
    printf("pa: address=%p \t value=%d \n", pa4, *pa4);   // pa: address=0x16b67b6ac    value=10
    b = *++pa4;
    printf("b: value=%d \n", b);                          // b: value=1863301168
    printf("pa: address=%p \t value=%d \n\n", pa4, *pa4); // pa: address=0x16f0fb6e0    value=1863301168
}