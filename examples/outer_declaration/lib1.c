#include <stdio.h>

extern int x; // переменная из файла app.c

void func1(void); // функция func1 из app.c

int y = 20;

void func2()
{
    printf("func2: y=%d \n", y);
}

int z = 30;

void func3()
{
    func1();
    printf("func3: x=%d \t y=%d \t z=%d \n", x, y, z);
}