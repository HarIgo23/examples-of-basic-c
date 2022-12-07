#include <stdio.h>
#include "lib.h"

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