#include <stdio.h>
#include <float.h>

#define SIZE 3

double max(const double *, const double *);

int main(void)
{
    double arr1[SIZE] = {1.1, 2.2, 3.3};
    double arr2[SIZE] = {1.1, 3.3, 2.2};
    double arr3[SIZE] = {3.3, 2.2, 1.1};

    printf("%.1lf\n", max(arr1, arr1 + SIZE));
    printf("%.1lf\n", max(arr2, arr2 + SIZE));
    printf("%.1lf\n", max(arr3, arr3 + SIZE));

    return 0;
}

double max(const double * arr, const double * arr_end)
{
    double max_element = DBL_MIN;
    while (arr < arr_end)
    {
        if (*arr > max_element)
            max_element = *arr;
        arr++;
    }
    return max_element;
}