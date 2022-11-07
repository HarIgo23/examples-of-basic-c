#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
    int i = INT_MAX;
    unsigned int j = UINT_MAX;
    printf("%d %d %d\n", i, i+1, i+2);
    printf("%u %u %u\n", j, j + 1, j + 2) ;

    float f = FLT_MAX;
    float m = 1e-45;
    printf("%f %f %f\n", f, f*10., f*20.);
    printf("%e %e %e\n", m, (float)(m*.1), (float)(m*.01));

    return 0;
}