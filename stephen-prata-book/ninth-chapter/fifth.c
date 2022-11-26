#include <stdio.h>

void larger_of(double *x, double *y);


int main(void)
{
    double x = 1.0, y = 1.5;
    larger_of(&x, &y);
    printf("Result of larger_of: %.2lf, %.2lf\n", x, y);
    x = 1.5, y = 1.0;
    larger_of(&x, &y);
    printf("Result of larger_of: %.2lf, %.2lf\n", x, y);
    x = 1.0, y = 1.0;
    larger_of(&x, &y);
    printf("Result of larger_of: %.2lf, %.2lf\n", x, y);

    return 0;
}

void larger_of(double * x, double * y) {
    if (*x < *y)
        *x = *y;
    else
        *y = *x;
}
