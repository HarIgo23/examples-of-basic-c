#include <stdio.h>

double harmonic_mean(double x, double y);


int main(void)
{
    printf("Harmonic mean: %.2lf\n", harmonic_mean(1.0, 1.5)); // => 1.20
    printf("Harmonic mean: %.2lf\n", harmonic_mean(1.0, 9.0)); // => 1.80

    return 0;
}

double harmonic_mean(double x, double y) {
    return 2 / ((1 / x) + (1 / y));
}

