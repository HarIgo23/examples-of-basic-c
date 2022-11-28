#include <stdio.h>
#include <limits.h>

#define SIZE_1 3
#define SIZE_2 5

void fill_arr(int [SIZE_1][SIZE_2]);
char * get_postfix(int);
void print_arr(const int [SIZE_1][SIZE_2]);
void row_mean(const int [SIZE_1][SIZE_2]);
void table_mean(const int [SIZE_1][SIZE_2]);
void table_max(const int [SIZE_1][SIZE_2]);

int main(void)
{
    int source[SIZE_1][SIZE_2];

    fill_arr(source);
    print_arr(source);
    row_mean(source);
    table_mean(source);
    table_max(source);

    return 0;
}

void fill_arr(int arr[SIZE_1][SIZE_2])
{
    for (int i = 0; i < SIZE_1; i++)
    {
        printf("Enter %d%s row that contains %d elements\n", i + 1, get_postfix(i + 1), SIZE_2);
        for (int j = 0; j < SIZE_2; j++)
            scanf("%d", &arr[i][j]);
    }
}

char * get_postfix(int i)
{
    static char st[3] = "st";
    static char nd[3] = "nd";
    static char rd[3] = "rd";
    static char th[3] = "th";
    switch (i)
    {
        case 1:
            return st;
        case 2:
            return nd;
        case 3:
            return rd;
        default:
            return th;
    }
}

void print_arr(const int arr[SIZE_1][SIZE_2])
{
    for (int i = 0; i < SIZE_1; i++)
    {
        for (int j = 0; j < SIZE_2; j++)
            printf("%-2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void row_mean(const int arr[SIZE_1][SIZE_2])
{
    int row_sum;
    for (int i = 0; i < SIZE_1; i++)
    {
        row_sum = 0;
        for (int j = 0; j < SIZE_2; j++)
            row_sum += arr[i][j];
        printf("Mean of %d%s row is %2.1lf\n\n", i + 1, get_postfix(i + 1), (double)row_sum / SIZE_2);
    }
}

void table_mean(const int arr[SIZE_1][SIZE_2])
{
    int sum = 0;
    for (int i = 0; i < SIZE_1; i++)
        for (int j = 0; j < SIZE_2; j++)
            sum += arr[i][j];
    printf("Mean of table is %2.1lf\n\n", (double)sum / (SIZE_1 * SIZE_2));
}

void table_max(const int arr[SIZE_1][SIZE_2])
{
    int max = INT_MIN;
    for (int i = 0; i < SIZE_1; i++)
        for (int j = 0; j < SIZE_2; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
    printf("Max of table is %d\n\n", max);
}
