#include <stdio.h>

int main(void)
{
    int num;
    printf("");
    while(scanf("%d", &num) == 1)
    {
        printf("%d", num);
        printf("");
    }

    return 0;
}