#include <stdio.h>

int main(void)
{
    // first example
    int numbers1[4];
    numbers1[0] = 1; numbers1[1] = 2; numbers1[2] = 3; numbers1[3] = 4;
    printf("numbers[2] = %d\n", numbers1[2]); // => 3
    // second example
    int numbers2[4] = { 1, 2, 3, 5 };
    printf("numbers[2] = %d\n", numbers2[2]); // => 3
    // third example
    int numbers3[] = {1, 2, 3, 5};
    printf("numbers[2] = %d\n\n", numbers3[2]);
    // fourth example
    int numbers4[5] = {10, 12, 13, 54, 43};
    for (int i = 0; i < 5; i++)
    {
        printf("numbers[%d] = %d\n", i, numbers4[i]);
    }
    printf("\n");
    // fifth example
    int numbers5[3][2] = { {1, 2}, {4, 5}, {7, 8} };
    printf("numbers[1][0] = %d\n\n", numbers5[1][0]);
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("numbers[%d][%d] = %d \t", i, j, numbers5[i][j]);
        }
        printf("\n");
    }
    return 0;
}
