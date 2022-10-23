#include <stdio.h>

void printn()
{
    int n = 63;
    n++;
    //a++;error так сделать нельзя, так как a определена в функции main
    printf("n=%d \n", n);
}

int main(void)
{
    int a = 2;
    printn(); // => n=64
    //n++;error так сделать нельзя, так как n определена в функции printn
    printf("a=%d \n", a); // => a=2
    return 0;
}
