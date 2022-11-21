#include <stdio.h>

#define RATE 10.0
#define OVERTIME_COEF 1.5
#define WORK_TIME (8 * 5)
#define FIRST_TAX_REVERSE (1 - 0.15)
#define SECOND_TAX_REVERSE (1 - 0.20)
#define THIRD_TAX_REVERSE (1 - 0.25)

int main(void)
{
    int work_hours, overtime = 0, time = 0;
    double ebt = 0, eat = 0, diff = 0;

    printf("Enter your work hours(40): ");
    scanf("%d", &work_hours);

    if (work_hours > WORK_TIME)
    {
        overtime = work_hours - WORK_TIME;
        time = WORK_TIME;
    } else
    {
        time = work_hours;
    }

    ebt += time * RATE + overtime * RATE * OVERTIME_COEF;
    printf("Your earnings before taxes: $%.2lf\n", ebt);

    diff = ebt > 300 ? 300 : ebt;
    eat += diff * FIRST_TAX_REVERSE;
    ebt -= diff;

    diff = ebt > 150 ? 150 : ebt;
    eat += diff * SECOND_TAX_REVERSE;
    ebt -= diff;

    eat += ebt > 0 ? ebt * THIRD_TAX_REVERSE : 0;


    printf("Your earnings after taxes: $%.2lf\n", eat);

    return 0;
}
