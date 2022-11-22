#include <stdio.h>

#define FIRST_CLASS_LIMIT 17850
#define SECOND_CLASS_LIMIT 23900
#define THIRD_CLASS_LIMIT 29750
#define FOURTH_CLASS_LIMIT 14875
#define BASE_TAX_REVERSE (1 - 0.15)
#define UPPER_TAX_REVERSE (1 - 0.28)

int main(void)
{
    int option, limit;
    double ebt, eat, diff;

    printf("Choose your taxes category -"
           " 1) %d, 2) %d, 3) %d, 4) %d, 5) Exit\n",
           FIRST_CLASS_LIMIT, SECOND_CLASS_LIMIT, THIRD_CLASS_LIMIT, FOURTH_CLASS_LIMIT);
    while (scanf("%d", &option) == 1 && option != 5)
    {
        if (option < 1 || option > 4)
        {
            printf("Incorrect option: %d. Try again.", option);
            continue;
        }

        switch (option)
        {
            case 1:
                limit = FIRST_CLASS_LIMIT;
                break;
            case 2:
                limit = SECOND_CLASS_LIMIT;
                break;
            case 3:
                limit = THIRD_CLASS_LIMIT;
                break;
            case 4:
                limit = FOURTH_CLASS_LIMIT;
                break;
            default:
                break;
        }

        ebt = eat = diff = 0.0;
        printf("Enter your earnings before taxes(31250.50): ");
        scanf("%lf", &ebt);


        diff = ebt > limit ? limit : ebt;
        eat += diff * BASE_TAX_REVERSE;
        ebt -= diff;

        eat += ebt > 0 ? ebt * UPPER_TAX_REVERSE : 0;


        printf("Your earnings after taxes: $%.2lf\n", eat);
        printf("Choose your taxes category -"
               " 1) %d, 2) %d, 3) %d, 4) %d, 5) Exit\n",
               FIRST_CLASS_LIMIT, SECOND_CLASS_LIMIT, THIRD_CLASS_LIMIT, FOURTH_CLASS_LIMIT);
    }
    printf("Bye!\n");

    return 0;
}
