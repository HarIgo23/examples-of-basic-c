#include <stdio.h>

int fibonacci(int n);


int main(void)
{
    printf("Fibonacci 1 is: %d == %d\n", fibonacci(1), 1);
    printf("Fibonacci 2 is: %d == %d\n", fibonacci(2), 1);
    printf("Fibonacci 3 is: %d == %d\n", fibonacci(3), 2);
    printf("Fibonacci 4 is: %d == %d\n", fibonacci(4), 3);
    printf("Fibonacci 5 is: %d == %d\n", fibonacci(5), 5);
    printf("Fibonacci 6 is: %d == %d\n", fibonacci(6), 8);
    printf("Fibonacci 7 is: %d == %d\n", fibonacci(7), 13);
    printf("Fibonacci 8 is: %d == %d\n", fibonacci(8), 21);
    printf("Fibonacci 40 is: %d == %d\n", fibonacci(40), 102334155);


    return 0;
}

int fibonacci(int n) {
    int n1 = 1, n2 = 1, res = 1;
    for (int i = 2; i < n; i++)
    {
        res = n1 + n2;
        n1 = n2;
        n2 = res;
    }
    return res;
}
