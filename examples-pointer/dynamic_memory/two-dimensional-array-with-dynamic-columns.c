#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int **table;
    int *rows;

    int rowscount;
    int d;

    printf("Rows count = ");
    scanf("%d", &rowscount);

    table = calloc(rowscount, sizeof(int*));
    rows = malloc(sizeof(int)*rowscount);

    for (int i = 0; i<rowscount; i++)
    {
        printf("\nColumns count for row %d = ", i);
        scanf("%d", &rows[i]);
        table[i] = calloc(rows[i], sizeof(int));

        for (int j = 0; j<rows[i]; j++)
        {
            printf("table[%d][%d] = ", i, j);
            scanf("%d", &d);
            table[i][j] = d;
        }
    }
    printf("\n");

    for (int i = 0; i<rowscount; i++)
    {
        for (int j = 0; j<rows[i]; j++)
        {
            printf("%d \t", table[i][j]);
        }
        free(table[i]);
        printf("\n");
    }

    free(table);
    free(rows);

    return 0;
}