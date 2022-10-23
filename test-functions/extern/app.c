#include <stdio.h>

extern int y; // переменная из файла main.c

void func2(void); // функция func2 из main.c
void func3(void);// функция func3 из main.c

int x = 10;

int main(void)
{
    func3();
    return 0;
}

void func1()
{
    printf("func1: x=%d \t y=%d \n", x, y);
    func2();
}