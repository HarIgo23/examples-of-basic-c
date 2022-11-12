#include <stdio.h>
#include <float.h>

int main(void)
{
    double d_res = 1.0 / 3.0;
    float f_res = (float)(1.0 / 3.0);

    printf("%.4f, %.4f\n", d_res, f_res);
    printf("%.8f, %.8f\n", d_res, f_res);
    printf("%.20f, %.20f\n", d_res, f_res);

    printf("%d\n", DBL_DIG); // количество верных десятичных цифр
    printf("%d\n", FLT_DIG); // количество верных десятичных цифр

    return 0;
}
