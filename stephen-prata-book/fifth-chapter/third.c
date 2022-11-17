#include <stdio.h>

#define DAYS_PER_WEEK 7

int main(void)
{
    int days;
    printf("Enter amount of days or zero for exit: ");
    scanf("%d", &days);
    while (days > 0)
    {
        printf("%d day(s) is %d week(s) and %d day(s)\n", days, days / DAYS_PER_WEEK, days % DAYS_PER_WEEK);
        printf("Enter amount of days or zero for exit: ");
        scanf("%d", &days);
    }

    return 0;
}