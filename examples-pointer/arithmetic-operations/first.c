#include <stdio.h>

int main(void)
{
    int n = 10;
    int *ptr = &n;
    printf("address=%p \t value=%d \n", ptr, *ptr);
    ptr++;
    printf("address=%p \t value=%d \n", ptr, *ptr);
    ptr--;
    printf("address=%p \t value=%d \n", ptr, *ptr);
    return 0;
}
