#include <stdio.h>

#define SIZE 8

int main(void)
{
    double num[SIZE], sumnum[SIZE];

    printf("Enter eight numbers:\n");
    scanf("%lf", &num[0]);
    sumnum[0] = num[0];
    for (int i = 1; i < SIZE; i++)
    {
        scanf("%lf", &num[i]);
        sumnum[i] = sumnum[i-1] + num[i];
    }
    for (int i = 0; i < SIZE; i++)
        printf("%5.1lf ", num[i]);
    printf("\n");
    for (int i = 0; i < SIZE; i++)
        printf("%5.1lf ", sumnum[i]);
    printf("\n");

    return 0;
}