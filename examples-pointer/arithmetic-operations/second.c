#include <stdio.h>

int main(void)
{
    double d = 10.6;
    double *pd = &d;
    printf("address=%p \n", pd);
    pd++;
    printf("address=%p \n", pd);
    char c = 'N'; char *pc = &c;
    printf("address=%p \n", pc);
    pc++;
    printf("address=%p \n", pc);
    return 0;
}
