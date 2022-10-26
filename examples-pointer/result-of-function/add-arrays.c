#include <stdio.h>
#include <stdlib.h>

int *addArrays(int a[], int b[], int count)
{
    int *ptr = calloc(count, sizeof(int));

    for (int i = 0; i < count; i++)
        ptr[i] = a[i] + b[i];

    return ptr;
}

int main(void)
{
    int a[] = {3, 4, 5, 6, 7};
    int b[] = {1, 1, 1, 1, 1};

    int count = sizeof(a)/sizeof(a[0]);
    int *ptr = addArrays(a, b, count);
    int *p = ptr;
    for (int i=0; i<count; i++){
        printf("%d \t", *p++);
    }
    printf("\n");

    free(ptr);
    return 0;
}
