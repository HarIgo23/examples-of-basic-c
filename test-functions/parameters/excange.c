#include <stdio.h>

void exchange(double currate, double sum)
{
    double result = sum / currate;
    printf("result=%.2f \n", result);
}

void exchange_from_input()
{
    double rate; double sum;
    printf("Currency rate:");
    scanf("%lf", &rate); // ввод обменного курса иностранной валюты
    printf("Sum:");
    scanf("%lf", &sum); // ввод суммы в текущей валюте
    // обмен - передача значений переменных
    exchange(rate, sum);
}

int main(void)
{
    // exchange_from_input();
    // обмен - передача числовых констант
    exchange(56.87, 2000); // => result=35.17
    return 0;
}