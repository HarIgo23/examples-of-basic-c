#include <stdio.h>

#define SIZE 4

void sum_elements_of_two_array(int * target, const int * source1, const int * source2, int n);
void print_arr(const int * arr, int n);

int main(void)
{
    const int source1[SIZE] = {2, 4, 5, 8};
    const int source2[SIZE] = {1, 0, 4, 6};
    int target[SIZE];

    sum_elements_of_two_array(target, source1, source2, SIZE);
    print_arr(source1, SIZE);
    print_arr(source2, SIZE);
    printf("================\n");
    print_arr(target, SIZE);

    return 0;
}


void sum_elements_of_two_array(int target[], const int source1[], const int source2[], int n)
{
    for (int i = 0; i < n; i++)
        target[i] = source1[i] + source2[i];
}

void print_arr(const int * arr, int n)
{
    printf("[");
    const int * ptr = arr;
    while (ptr < arr + n - 1)
        printf("%2d, ", *ptr++);
    printf("%2d]\n", *ptr);
}

