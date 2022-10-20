#include <stdio.h>
#include <limits.h>

int main(void)
{
    int number = 2;
    printf("sizeof(number) = %lu \n", sizeof(number));
    printf("INT_MIN = %d \n", INT_MIN);
    printf("INT_MAX = %d \n", INT_MAX);
    return 0;
}
