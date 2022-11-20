#include <stdio.h>

int main(void)
{
    int upper, lower, sum, i;
    printf("Enter lower and upper bound(1 2): ");
    scanf("%d%d", &lower, &upper);
    while (lower < upper)
    {
        for (sum = 0, i = lower; i <= upper; sum += i * i, i++)
            continue;
        printf("Sum of squares between %d and %d: %d\n", lower * lower, upper * upper, sum);
        printf("Enter lower and upper bound(1 2): ");
        scanf("%d%d", &lower, &upper);
    }

    return 0;
}