#include <stdio.h>

void factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    printf("Factorial of %d is equal %d \n", n, result);
}

int main(void)
{
    factorial(4); // 24
    factorial(6); // 720
    return 0;
}
