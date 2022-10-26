#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int *block = NULL; // NULL required only for realloc
    int n;

    printf("Size of array= ");
    scanf("%d", &n);

    // выделение памяти тремя разными способами
    block = malloc(n * sizeof(int));
    // block = calloc(n, sizeof(int));
    // block = realloc(block, n * sizeof(int));

    // вводим числа в массив
    for(int i=0;i<n; i++)
    {
        printf("block[%d]=", i);
        scanf("%d", &block[i]);
    }
    printf("\n");

    // вывод введенных чисел на консоль
    for(int i=0;i<n; i++)
    {
        printf("%d \t", block[i]);
    }
    printf("\n");

    free(block);

    return 0;
}