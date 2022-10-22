#include <stdio.h>

#define print(a) printf("%d\n", a)

int main(void)
{
    int x = 10;
    print(x);
    int y = 20;
    print(y);
    int arr[3] = {1, 2, 3};
    for (int i = 0; i < 3; i++)
        print(arr[i]);
}
