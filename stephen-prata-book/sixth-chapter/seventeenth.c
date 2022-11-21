#include <stdio.h>

#define START_MONEY 1000000.0
#define PERCENT 0.08
#define EVERY_YEAR_CASH 100000.0

int main(void)
{
    double start = START_MONEY;
    int counter = 0;
    while (start > 0)
    {
        start += start * PERCENT;
        start -= EVERY_YEAR_CASH;
        counter++;
    }
    printf("%d year(s)\n", counter - 1);

    return 0;
}
