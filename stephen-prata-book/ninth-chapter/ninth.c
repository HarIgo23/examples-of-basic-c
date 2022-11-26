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

    double res = base;
    int p = exp < 0 ? -exp : exp;
    res *= power(base, p-1);

    if (exp < 0)
        return 1 / res;
    return res;
}
