#include <stdio.h>
#include <float.h>

#define SIZE 3

double max_min_diff(const double *, const double *);

int main(void)
{
    double arr1[SIZE] = {1.1, 2.2, 3.3};
    double arr2[SIZE] = {1.1, 3.3, 2.2};
    double arr3[SIZE] = {3.3, 2.2, 1.1};
    double arr4[1] = {3.3};

    printf("%.1lf\n", max_min_diff(arr1, arr1 + SIZE));
    printf("%.1lf\n", max_min_diff(arr2, arr2 + SIZE));
    printf("%.1lf\n", max_min_diff(arr3, arr3 + SIZE));
    printf("%.1lf\n", max_min_diff(arr4, arr4 + 1));

    return 0;
}

double max_min_diff(const double * arr, const double * arr_end)
{
    if (arr_end - arr < 2)
        return 0.0;
    double max_element = DBL_MIN;
    double min_element = DBL_MAX;
    while (arr < arr_end)
    {
        if (*arr > max_element)
            max_element = *arr;
        if (*arr < min_element)
            min_element = *arr;
        arr++;
    }
    return max_element - min_element;
}