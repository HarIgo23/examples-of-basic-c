#include <stdio.h>

#define SIZE 8

int main(void)
{
    int num[SIZE];

    printf("Enter eight numbers:\n");
    num[0] = 2;
    for (int i = 1; i < SIZE; i++)
        num[i] = num[i-1] * 2;
    for (int i = 0; i < SIZE; i++)
        printf("%d ", num[i]);

    printf("\n");

    return 0;
}