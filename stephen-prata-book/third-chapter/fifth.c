#include <stdio.h>

#define YEAR_TO_SECOND 3.156e7

int main(void)
{
    int count_of_years;
    printf("Enter your age: ");
    scanf("%d", &count_of_years);
    double years_in_seconds = count_of_years * YEAR_TO_SECOND;
    printf("Your age in seconds: %0.f or %e", years_in_seconds, years_in_seconds);

    return 0;
}
