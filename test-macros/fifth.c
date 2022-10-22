#include <stdio.h>

#define unite(a,b,c) a##b##c

int main(void)
{
    int x = unite(2, 81, 34); // 28134
    printf("%d \n", x);
    return 0;
}
