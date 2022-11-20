#include <stdio.h>

int main(void)
{
    int upper, lower;
    printf("Enter lower bound: ");
    scanf("%d", &upper);
    printf("Enter upper bound: ");
    scanf("%d", &upper);

    for (int i = lower; i <= upper; i++)
        printf("num = %3d, num^2 = %3d, num^3 = %3d\n", i, i*i, i*i*i);

    return 0;
}