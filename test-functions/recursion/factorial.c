#include <stdio.h>

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    int result = factorial(6);
    printf("%d \n", result); // 720
    return 0;
}
