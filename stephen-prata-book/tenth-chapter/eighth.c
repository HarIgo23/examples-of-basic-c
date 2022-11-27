#include <stdio.h>

#define SIZE_1 7
#define SIZE_2 3

void copy(double * target, const double * source_start, const double * source_end);
void print_arr(const double * arr, int n);


int main(void)
{
    const double source[SIZE_1] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6, 7.7};
    double target[SIZE_2];

    copy(target, source + 2, source + 2 + SIZE_2);

    print_arr(source, SIZE_1);
    printf("\n");
    print_arr(target, SIZE_2);

    return 0;
}

void copy(double * target, const double * source_start, const double * source_end)
{
    while (source_start < source_end)
        *target++ = *source_start++;
}

void print_arr(const double * arr, int n)
{
    printf("[");
    const double * ptr = arr;
    while (ptr < arr + n - 1)
        printf("%.1lf, ", *ptr++);
    printf("%.1lf]\n", *ptr);
}