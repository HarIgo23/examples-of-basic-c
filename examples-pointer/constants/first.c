#include <stdio.h>

int main(void)
{
    const int a = 10;
    const int *pa = &a;
    printf("address=%p \t value=%d \n\n", pa, *pa);

    // указатель на константу
    int b = 10;
    const int *pb = &b;
    printf("value=%d \n", *pb); // => 10
    b = 22;
    printf("value=%d \n", *pb); // => 22
    // *pb = 34; // так делать нельзя
    int c = 45;
    pb = &c; // а вот так можно
    printf("value=%d \n\n", *pb); // => 45

    // константный указатель
    int d = 10;
    int *const pd = &d;
    printf("value=%d \n", *pd); // => 10
    *pd = 22; // меняем значение
    printf("value=%d \n\n", *pa); // => 22
    // pd = &c; так нельзя сделать

    // константный указатель на константу
    int e = 10;
    const int *const pe = &e;
    // *pe = 22; // нельзя
    // pe = &c; // нельзя
}
