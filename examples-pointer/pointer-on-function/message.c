#include <stdio.h>

void hello(void)
{
    printf("Hello, World \n");
}

void goodbye()
{
    printf("Good Bye, World \n");
}

int main(void)
{
    void (*message) (void);

    message = hello;
    message();
    message = goodbye;
    message();

    return 0;
}