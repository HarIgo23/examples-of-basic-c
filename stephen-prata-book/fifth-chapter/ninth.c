#include <stdio.h>

#define CELSIUS "°C"
#define FAHRENHEIT "°F"
#define KELVIN "K"

void temperatures(double fahrenheit);

int main(void)
{
    double fahrenheit = 1.2;
    printf("Enter temperatures in fahrenheit or q for exit:\n");
    while (scanf("%lf", &fahrenheit))
        temperatures(fahrenheit);

    return 0;
}

void temperatures(double fahrenheit)
{
    double celsius = 5.0 / 9.0 * (fahrenheit - 32.0);
    double kelvin = celsius + 273.15;

    printf(
           "Fahrenheit: %.3lf%s, Celsius: %.3lf%s, Kelvin: %.3lf%s\n",
           fahrenheit, FAHRENHEIT, celsius, CELSIUS, kelvin, KELVIN
    );
}