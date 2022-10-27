#include <stdio.h>
#include <stdlib.h>

int *createPointer()
{
    static int *p = NULL;
    if(p==NULL)
    {
        p = malloc(sizeof(int));
        *p = 1;
    }
    printf("%d \t", (*p));
    (*p)++;
    return p;
}

int main(void)
{
    int* ptr;
    ptr = createPointer();
    ptr = createPointer();
    ptr = createPointer();
    ptr = NULL; // не затрагивает указатель в функции
    ptr = createPointer();
    printf("\n");
    free(ptr); // освобождает память указателя из функции

    return 0;
}
