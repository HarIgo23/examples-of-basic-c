#include <stdio.h>

double min(double x, double y);


int main(void)
{
    printf("Min: %.2lf\n", min(1.0, 1.5));
    printf("Min: %.2lf\n", min(1.5, 1.0));
    printf("Min: %.2lf\n", min(1.0, 1.0));

    return 0;
}

double min(double x, double y) {
    if (x < y)
        return x;
    return y;
}
