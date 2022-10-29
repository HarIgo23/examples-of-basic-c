#include <stdio.h>

struct time
{
    int hour;
    int minute;
    int second;
};

// прототип функции
void addminutes(struct time *, int);

int main(void)
{
    struct time current_time = {17, 38, 10};

    struct time *p_time = &current_time;
    addminutes(p_time, 21);
    printf("In main \t %d:%d:%d \n", current_time.hour, current_time.minute, current_time.second);

    return 0;
}

void addminutes(struct time *t, int minutes)
{
    int h, d;

    t->minute += minutes;

    if (t->minute >= 60)
    {
        h = t->minute / 60;
        t->minute -= 60 * h;
        t->hour += h;
    }

    if (t->hour >= 24)
    {
        d = t->hour / 24;
        t->hour -= 24 * d;
    }
    printf("In addminutes \t %d:%d:%d \n", t->hour, t->minute, t->second);
}