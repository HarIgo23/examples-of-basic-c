#include <stdio.h>

struct time {
    int hour;
    int minute;
    int second;
};

// прототип функции
struct time addminutes(struct time, int);

int main(void) {
    struct time current_time = {17, 38, 10};
    printf("Current time - %d:%d:%d \n", current_time.hour, current_time.minute, current_time.second);

    int minutes = 21;
    struct time result_time = addminutes(current_time, minutes);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);

    result_time = addminutes(current_time, 23);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);

    result_time = addminutes(current_time, 382);
    printf("%d:%d:%d \n", result_time.hour, result_time.minute, result_time.second);
    return 0;
}

struct time addminutes(struct time t, int minutes) {
    struct time result = {t.hour, t.minute, t.second};
    int h, d;

    // прибавляем минуты
    result.minute += minutes;

    // если минут больше 59
    if (result.minute >= 60) {
        h = result.minute / 60; // если минут больше 59, делим на 60
        result.minute -= 60 * h; // от минут вычитаем 60 * h
        result.hour += h; // к часам прибавляем h
    }

    // если часов больше 23, делим на 24
    if (result.hour >= 24) {
        d = result.hour / 24;  // если часов больше 23, делим на 24
        result.hour -= 24 * d; // от часов вычитаем d * 24
    }
    return result;
}
