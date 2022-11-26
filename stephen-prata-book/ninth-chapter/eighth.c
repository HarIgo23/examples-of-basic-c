#include <stdio.h>

double power(int base, int exp);


int main(void)
{
    printf("Power is: %.2lf == %.2lf\n", power(3, 2), 9.0);
    printf("Power is: %.2lf == %.2lf\n", power(2, -2), 0.25);
    printf("Power is: %.2lf == %.2lf\n", power(5, -1), 0.2);
    printf("Power is: %.2lf == %.2lf\n", power(3, 0), 1.0);
    printf("Power is: %.2lf == %.2lf\n", power(0, 0), 1.0);
    printf("Power is: %.2lf == %.2lf\n", power(0, 3), 0.0);

    return 0;
}

double power(int base, int exp) {
    if (exp == 0)
        return 1.0;

    if (base == 0)
        return 0.0;

    double res = base;
    for (int i = 1; i < exp; i++)
        res *= base;
    if (exp < 0)
        res = 1 / res;

    return res;
}
