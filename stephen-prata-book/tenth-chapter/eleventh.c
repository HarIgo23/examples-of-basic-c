#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 5

void twice_arr(int [SIZE_1][SIZE_2]);
void print_arr(const int [SIZE_1][SIZE_2]);

int main(void)
{
    int source[SIZE_1][SIZE_2] = {
            {1, 2, 3, 4, 5},
            {6, 7, 8, 9, 10},
            {11, 12, 13, 14, 15}
    };

    print_arr(source);
    twice_arr(source);
    printf("\n");
    print_arr(source);

    return 0;
}

void twice_arr(int arr[SIZE_1][SIZE_2])
{
    for (int i = 0; i < SIZE_1; i++)
        for (int j = 0; j < SIZE_2; j++)
            arr[i][j] *= 2;
}

void print_arr(const int arr[SIZE_1][SIZE_2])
{
    for (int i = 0; i < SIZE_1; i++)
    {
        for (int j = 0; j < SIZE_2; j++)
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}