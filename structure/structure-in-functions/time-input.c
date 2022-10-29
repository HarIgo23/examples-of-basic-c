#include <stdio.h>
#include <stdlib.h>

struct time
{
    int hour;
    int minute;
    int second;
};

// прототип функции
struct time *input(void);

int main(void)
{
    struct time *p_time = input();

    printf("%d:%d:%d \n", p_time->hour, p_time->minute, p_time->second);

    free(p_time);   // освобождаем память
    return 0;
}

struct time *input()
{
    // выделяем память для структуры
    struct time *p_time = (struct time*)malloc(sizeof(struct time));

    // ввод значений
    printf("Enter hour: ");
    scanf("%d", &p_time->hour);

    printf("Enter minutes: ");
    scanf("%d", &p_time->minute);

    printf("Enter seconds: ");
    scanf("%d", &p_time->second);
    return p_time;
}