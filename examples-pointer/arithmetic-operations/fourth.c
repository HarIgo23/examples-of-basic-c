#include <stdio.h>

int main(void)
{
    int a = 10;
    int *pa = &a;
    int b = *pa + 20; // операция со значением, на который указывает указатель
    pa++; // операция с самим указателем
    printf("b=%d \n", b); // => 30
}