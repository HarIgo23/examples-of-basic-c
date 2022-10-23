#include <stdio.h>

int fibonachi(int n)
{
    if (n == 0 || n == 1)
    {
        return n;
    }
    return fibonachi(n - 1) + fibonachi(n - 2);
}

int main(void)
{
    int result = fibonachi(6);
    printf("%d \n", result); // 8
    return 0;
}
