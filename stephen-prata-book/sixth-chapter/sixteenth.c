#include <stdio.h>

#define START_MONEY 100.0
#define SIMPLE_PERCENT 0.1
#define COMPLICATE_PERCENT 0.05

int main(void)
{
    double simple_sum = START_MONEY, complicate_sum = START_MONEY;
    int counter = 0;
    while (complicate_sum <= simple_sum)
    {
        simple_sum += START_MONEY * SIMPLE_PERCENT;
        complicate_sum += complicate_sum * COMPLICATE_PERCENT;
        counter++;
    }
    printf("Sum of complicated percent would be more after %d year(s)\n", counter);
    printf("Sum of complicate percent: %.3lf, sum of simple percent: %.3lf\n", complicate_sum, simple_sum);

    return 0;
}
