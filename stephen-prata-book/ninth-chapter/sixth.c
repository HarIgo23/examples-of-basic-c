#include <stdio.h>

void sort_by_variable(double *x, double *y, double *z);


int main(void)
{
    double x = 1.0, y = 1.5, z = 0.5;
    sort_by_variable(&x, &y, &z);
    printf("Result of sort_by_variable: %.2lf, %.2lf, %.2lf\n", x, y, z);
    x = 1.5, y = 0.5, z = 1.0;
    sort_by_variable(&x, &y, &z);
    printf("Result of sort_by_variable: %.2lf, %.2lf, %.2lf\n", x, y, z);
    x = 0.5, y = 1.0, z = 1.5;
    sort_by_variable(&x, &y, &z);
    printf("Result of sort_by_variable: %.2lf, %.2lf, %.2lf\n", x, y, z);

    return 0;
}

void sort_by_variable(double * x, double * y, double * z) {
    double min, mean, max;
    if (*x <= *y && *x <= *z) {
        min = *x;
        if (*y <= *z) {
            mean = *y;
            max = *z;
        } else {
            mean = *z;
            max = *y;
        }
    } else if (*y <= *x && *y <= *z) {
        min = *y;
        if (*x <= *z) {
            mean = *x;
            max = *z;
        } else {
            mean = *z;
            max = *x;
        }
    } else {
        min = *z;
        if (*y <= *x) {
            mean = *y;
            max = *x;
        } else {
            mean = *x;
            max = *y;
        }
    }
    *x = min;
    *y = mean;
    *z = max;
}
