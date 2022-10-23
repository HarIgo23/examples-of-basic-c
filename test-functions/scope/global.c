#include <stdio.h>

int n = 5;

void printn()
{
    n++;
    printf("n=%d \n", n);
}

int main(void)
{
    printn(); // => n=6
    n++;
    printf("n=%d \n", n); // => n=7
    return 0;
}
