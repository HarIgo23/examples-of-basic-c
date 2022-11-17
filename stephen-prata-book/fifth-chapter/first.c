#include <stdio.h>

#define MINUTES_PER_HOUR 60

int main(void)
{
    int minutes;
    do
    {
        printf("Enter amount of minutes or zero for exit: ");
        scanf("%d", &minutes);
        printf("%d hour(s) and %d minute(s)\n", minutes / MINUTES_PER_HOUR, minutes % MINUTES_PER_HOUR);
    }
    while (minutes > 0);

    return 0;
}