#include <stdio.h>

void add(int a, int b, int c)
{
    a = a + c;
    b = b + c;
    printf("Add function: a=%d \t b=%d \n", a, b);
}

int main(void)
{
    int a = 20, b = 14;
    printf("Main function before add: a=%d \t b=%d \n", a, b);
    add(a, b, 30);
    printf("Main function after add: a=%d \t b=%d \n", a, b);
    return 0;
}
