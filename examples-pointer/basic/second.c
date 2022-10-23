#include <stdio.h>

int main(void)
{
    char c = 'N'; int d = 10; short s = 2;
    char *pc = &c; int *pd = &d; short *ps = &s;
    printf("Var c: addr=%p \t val=%c \n", pc, *pc);
    printf("Var d: addr=%p \t val=%d \n", pd, *pd);
    printf("Var s: addr=%p \t val=%hd \n", ps, *ps);
    return 0;
}
