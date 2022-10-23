#include <stdio.h>

int factorial(int n);

int main(void)
{
    int n = 4;
    printf("Factorial of %d is equal %d \n", n, factorial(n)); // 24
    n = 6;
    printf("Factorial of %d is equal %d \n", n, factorial(n)); // 720
    return 0;
}

int factorial(int n)
{
    int result = 1;
    for (int i = 1; i <= n; i++)
        result *= i;
    return result;
}
