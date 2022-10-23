#include <stdio.h>

int exchange(double currate, double sum)
{
    return sum / currate; // return (int)sum/rate;
}

int main(void)
{
    printf("%d \n", exchange(56.83, 24560)); // => 432
    return 0;
}