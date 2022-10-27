#include <stdio.h>
#include <stdlib.h>

void createPointer()
{
    int *p = NULL;
    if(p==NULL)
    {
        p = malloc(sizeof(int));
        *p = 1;
    }
    printf("%d \t", (*p));
    (*p)++;
    free(p);
}

int main(void)
{
    createPointer();
    createPointer();
    createPointer();
    printf("\n");

    return 0;
}
