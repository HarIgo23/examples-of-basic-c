#include <stdio.h>
#include <limits.h>

void fill_arr(int n, int m, int [n][m]);
char * get_postfix(int);
void print_arr(int n, int m, const int [n][m]);
void row_mean(int n, int m, const int [n][m]);
void table_mean(int n, int m, const int [n][m]);
void table_max(int n, int m, const int [n][m]);

int main(void)
{
    int n, m;
    printf("Enter size of array:");
    scanf("%d%d", &n, &m);
    int source[n][m];

    fill_arr(n, m, source);
    print_arr(n, m, source);
    row_mean(n, m, source);
    table_mean(n, m, source);
    table_max(n, m, source);

    return 0;
}

void fill_arr(int n, int m, int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        printf("Enter %d%s row that contains %d elements\n", i + 1, get_postfix(i + 1), m);
        for (int j = 0; j < m; j++)
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

void print_arr(const int n, int m, const int arr[n][m])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            printf("%-2d ", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}

void row_mean(const int n, int m, const int arr[n][m])
{
    int row_sum;
    for (int i = 0; i < n; i++)
    {
        row_sum = 0;
        for (int j = 0; j < m; j++)
            row_sum += arr[i][j];
        printf("Mean of %d%s row is %2.1lf\n\n", i + 1, get_postfix(i + 1), (double)row_sum / m);
    }
}

void table_mean(const int n, int m, const int arr[n][m])
{
    int sum = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            sum += arr[i][j];
    printf("Mean of table is %2.1lf\n\n", (double)sum / (n * m));
}

void table_max(const int n, int m, const int arr[n][m])
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            if (arr[i][j] > max)
                max = arr[i][j];
    printf("Max of table is %d\n\n", max);
}
