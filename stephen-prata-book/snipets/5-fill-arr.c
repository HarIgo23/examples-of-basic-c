#include <stdio.h>

#define SIZE_1 3
#define SIZE_2 5

void fill_arr(int [SIZE_1][SIZE_2]);
void print_arr(const int [SIZE_1][SIZE_2]);
char * get_postfix(int i);

int main(void)
{
    int arr[SIZE_1][SIZE_2];
    fill_arr(arr);


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
            printf("%2d ", arr[i][j]);
        printf("\n");
    }
}