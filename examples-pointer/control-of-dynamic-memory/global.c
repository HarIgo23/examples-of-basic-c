#include <stdio.h>
#include <stdlib.h>

int *p = NULL;

void createPointer()
{
    printf("%d \t", (*p));
    (*p)++;
}

int main(void)
{
    p = malloc(sizeof(int));
    *p = 1;
    createPointer();
    createPointer();
    createPointer();
    printf("\n");

    free(p);

    return 0;
}
