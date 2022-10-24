#include <stdio.h>

int main(void)
{
    int a[3][4] = {{1, 2, 3, 4} , {5, 6, 7, 8}, {9, 10, 11, 12}};
    int element_size_bytes = sizeof(a[0][0]); // 4 - так как int
    int row_size_bytes = sizeof(a[0]); // 16 так как 4 элемента по 4 байта int
    int array_size_bytes = sizeof(a); // 48 так как всего 12 элементов по 4 байта int

    int n = array_size_bytes / row_size_bytes; // число строк
    int m = row_size_bytes / element_size_bytes; // число столбцов
    int *final = a[0] + n*m - 1; // указатель на последний элемент

    for(int *ptr=a[0], i=1; ptr<=final; ptr++, i++)
    {
        printf("%d \t", *ptr);
        if(i%m==0)
        {
            printf("\n");
        }
    }
    printf("\n");

    for(int *ptr=a[0], i=0; i<m*n;)
    {
        printf("%d \t", *ptr++);
        if(++i%m==0)
        {
            printf("\n");
        }
    }

    return 0;
}

