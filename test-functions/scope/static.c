#include <stdio.h>

void display()
{
    int i = 0;
    i++;
    printf("i=%d \n", i);
}

void display_static()
{
    static int i = 0;
    i++;
    printf("i=%d \n", i);
}

int main(void)
{
    display(); // => i=1
    display(); // => i=1
    display(); // => i=1
    display_static(); // => i=1
    display_static(); // => i=2
    display_static(); // => i=3
    return 0;
}
