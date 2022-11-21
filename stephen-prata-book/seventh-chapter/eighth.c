#include <stdio.h>

#define OVERTIME_COEF 1.5
#define WORK_TIME (8 * 5)
#define FIRST_TAX_REVERSE (1 - 0.15)
#define SECOND_TAX_REVERSE (1 - 0.20)
#define THIRD_TAX_REVERSE (1 - 0.25)

int main(void)
{
    int work_hours, overtime, time, option;
    double ebt, eat, diff, rate;

    printf("Choose rate - 1) $8.75/h, 2) $9.33/h, 3) $10.0/h, 4) $11.20/h, 5) Exit\n");
    while (scanf("%d", &option) == 1 && option != 5)
    {
        if (option < 1 || option > 4)
        {
            printf("Incorrect option: %d. "
                   "Choose rate again - 1) $8.75/h, 2) $9.33/h, 3) $10.0/h, 4) $11.20/h, 5) Exit\n", option);
            continue;
        }

        switch (option)
        {
            case 1:
                rate = 8.75;
                break;
            case 2:
                rate = 9.33;
                break;
            case 3:
                rate = 10.0;
                break;
            case 4:
                rate = 11.20;
                break;
            default:
                break;
        }

        overtime = time = 0;
        ebt = eat = diff = 0.0;
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

        ebt += time * rate + overtime * rate * OVERTIME_COEF;
        printf("Your earnings before taxes: $%.2lf\n", ebt);

        diff = ebt > 300 ? 300 : ebt;
        eat += diff * FIRST_TAX_REVERSE;
        ebt -= diff;

        diff = ebt > 150 ? 150 : ebt;
        eat += diff * SECOND_TAX_REVERSE;
        ebt -= diff;

        eat += ebt > 0 ? ebt * THIRD_TAX_REVERSE : 0;


        printf("Your earnings after taxes: $%.2lf\n", eat);
        printf("Choose rate - 1) $8.75/h, 2) $9.33/h, 3) $10.0/h, 4) $11.20/h, 5) Exit\n");
    }
    printf("Bye!\n");

    return 0;
}
