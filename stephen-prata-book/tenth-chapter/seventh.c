#include <stdio.h>

#define SIZE_1 2
#define SIZE_2 3

void copy(double * target, const double * source, int n);

int main(void)
{
    const double source[SIZE_1][SIZE_2] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    double target1[SIZE_1][SIZE_2];

    for (int i = 0; i < SIZE_1; i++)
        copy(*(target1 + i), *(source + i), SIZE_2);

    for (int i = 0; i < SIZE_1; i++)
    {
        for (int j = 0; j < SIZE_2; j++)
            printf("%.1lf,%.1lf  ", source[i][j], target1[i][j]);
        printf("\n");
    }

    return 0;
}


void copy(double * target, const double * source, int n)
{
    for (int i = 0; i < n; i++)
        *(target + i) = *(source + i);
}

