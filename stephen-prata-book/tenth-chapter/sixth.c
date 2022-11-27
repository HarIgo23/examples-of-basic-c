#include <stdio.h>
#include <float.h>

#define SIZE 3

void revert(double *, int);
void print_arr(double *, int);

int main(void)
{
    double arr1[SIZE] = {1.1, 2.2, 3.3};
    double arr2[SIZE] = {1.1, 3.3, 2.2};
    double arr3[SIZE] = {3.3, 2.2, 1.1};

    print_arr(arr1, SIZE);
    revert(arr1, SIZE);
    print_arr(arr1, SIZE);
    printf("\n");

    print_arr(arr2, SIZE);
    revert(arr2, SIZE);
    print_arr(arr2, SIZE);
    printf("\n");

    print_arr(arr3, SIZE);
    revert(arr3, SIZE);
    print_arr(arr3, SIZE);
    printf("\n");

    return 0;
}

void revert(double * arr, int n)
{

    int last_index = (int)n - 1;
    int first_index = 0;
    double temp;

    for (int i = 0; i < n/2; i++)
    {
        temp = arr[first_index];
        arr[first_index++] = arr[last_index];
        arr[last_index--] = temp;
    }
}

void print_arr(double * arr, int n)
{
    printf("[");
    double * ptr = arr;
    while (ptr < arr + n - 1)
        printf("%.1lf, ", *ptr++);
    printf("%.1lf]\n", *ptr);
}