#include <stdio.h>

int add(int x, int y)
{
    return x+y;
}

int subtract(int x, int y)
{
    return x-y;
}

int operation(int (*op) (int, int), int x, int y)
{
    return op(x, y);
}


int main(void)
{
    int a = 10;
    int b = 5;
    int result;
    
    result = operation(add, a, b);
    printf("result=%d \n", result);

    result = operation(subtract, a, b);
    printf("result=%d \n", result);

    return 0;
}