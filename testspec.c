#include <stdio.h>

int main(void)
{
    printf("Name=%s, Age=%d, Weight=%09.2e\n", "Tom", 23, 63.3456);
    int a = 57; int b = 43; int c = a + b + 7;
    printf("%d \n", c);
    return 0;
}
