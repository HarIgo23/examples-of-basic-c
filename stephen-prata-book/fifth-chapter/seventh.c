#include <stdio.h>

double cube(double number);

int main(void)
{
    double number = 1.2;
    printf("Enter number: ");
    scanf("%lf", &number);
    printf("Cube of %.3f is %.3f\n", number, cube(number));

    return 0;
}

double cube(double number)
{
    return number * number * number;
}