#include <stdio.h>

int main(void)
{
    char c = 'N';
    char *pc = &c; int *pd = (int *)pc;
    printf("Var c: addr=%p \t val=%c \n", pc, *pc);
    printf("Var d: addr=%p \t val=%d \n", pd, *pd);
    return 0;
}
