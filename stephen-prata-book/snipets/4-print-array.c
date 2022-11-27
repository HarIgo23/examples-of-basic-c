#include <stdio.h>

#define SIZE 3

void print_arr(const double *, int);

int main(void)
{
    double arr[SIZE] = {1.1, 2.2, 3.3};
    print_arr(arr, SIZE);

    return 0;
}

void print_arr(const double * arr, int n)
{
    printf("[");
    const double * ptr = arr;
    while (ptr < arr + n - 1)
        printf("%.1lf, ", *ptr++);
    printf("%.1lf]\n", *ptr);
}