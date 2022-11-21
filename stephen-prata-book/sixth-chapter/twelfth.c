#include <stdio.h>

int main(void)
{
    int limit;
    double sum = 0, next;
    printf("Enter limit of number: ");
    scanf("%d", &limit);

    for (int i = 1; i <= limit; i++)
        sum += 1.0 / i;
    printf("%lf\n", sum);

    sum = 0;
    for (int i = 1; i <= limit; i++)
        sum += (i % 2 == 0) ? -1.0 / i : 1.0 / i;
    printf("%lf\n", sum);

    return 0;
}