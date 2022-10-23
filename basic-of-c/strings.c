#include <stdio.h>

int main(void)
{
    // first example
    char welcome[] = "Hello";
    printf("%s\n", welcome); // => Hello
    // second example
    for (int i = 0; i < 6; i++)
    {
        printf("%d ", welcome[i]); // => 72 101 108 108 111 0
    }
    printf("\n");
    // third example
    char welcome_arr[] = {'H', 'e', 'l', 'l', 'o', '\0'};
    printf("%s\n", welcome_arr); // => Hello
    return 0;
}
