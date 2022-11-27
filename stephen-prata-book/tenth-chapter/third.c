#include <stdio.h>
#include <limits.h>

#define SIZE 5

int max(const int *, const int *);

int main(void)
{
    int arr1[SIZE] = {1, 3, 4, 2, 0};
    int arr2[SIZE] = {1, 3, 0, 2, 4};
    int arr3[SIZE] = {4, 3, 1, 2, 0};

    printf("%d\n", max(arr1, arr1 + SIZE));
    printf("%d\n", max(arr2, arr2 + SIZE));
    printf("%d\n", max(arr3, arr3 + SIZE));

    return 0;
}

int max(const int * arr, const int * arr_end)
{
    int max_element = INT_MIN;
    while (arr < arr_end)
    {
        if (*arr > max_element)
            max_element = *arr;
        arr++;
    }
    return max_element;
}