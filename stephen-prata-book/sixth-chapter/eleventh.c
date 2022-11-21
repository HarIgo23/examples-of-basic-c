#include <stdio.h>

#define SIZE 8

int main(void)
{
    int num[SIZE];

    printf("Enter eight numbers:\n");
    for (int i = 0; i < SIZE; i++)
        scanf("%d", &num[i]);
    for (int i = SIZE - 1; i >= 0; i--)
        printf("%d ", num[i]);
    printf("\n");

    return 0;
}