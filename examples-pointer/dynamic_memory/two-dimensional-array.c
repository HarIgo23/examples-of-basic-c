#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **table;
    int n, m;

    printf("Set n = ");
    scanf("%d", &n);
    printf("Set m = ");
    scanf("%d", &m);
    printf("Array %dx%d\n", n, m);

    table = calloc(n, sizeof(int*));
    for (int i=0; i<n; i++)
    {
        table[i] = calloc(m, sizeof(int));
        for (int j=0; j<m; j++)
        {
            printf("table[%d][%d]=", i, j);
            scanf("%d", &table[i][j]);
        }
    }
    printf("\n");

    // вывод введенных чисел на консоль
    for (int i = 0; i<n; i++)
    {

        for (int j = 0; j<m; j++)
        {
            printf("%d \t", table[i][j]);
        }
        // освобождение памяти для одной строки
        free(table[i]);
        printf("\n");
    }

    // освобождение памяти
    free(table);

    return 0;
}
