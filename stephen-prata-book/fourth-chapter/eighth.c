#include <stdio.h>

#define GALON_TO_LITER 3.78541178
#define MILES_TO_KM 1.609344

int main(void)
{
    float miles, gallons;
    printf("Enter distance and how much fuel was consumed: ");
    scanf("%f%f", &miles, &gallons);

    printf("miles per gallon: %.3f\n", miles / gallons);
    printf("liters per 100km: %.3f\n", (gallons * GALON_TO_LITER) / (miles * MILES_TO_KM) * 100);

    return 0;
}