#include <stdio.h>

int main(void)
{
    int count, sum, n;
    printf("Enter last number of consequence: ");
    scanf("%d", &n);

    count = 0;
    sum = 0;
    while (count++ < n)
        sum = sum + count;
    printf("sum = %d\n", sum);

    return 0;
}
