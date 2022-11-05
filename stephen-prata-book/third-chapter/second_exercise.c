#include <stdio.h>

int main(void)
{
    printf("Enter code of your char: ");
    char c;
    int code;
    scanf("%d", &code);
    c = (char)code;
    printf("Your char is %c\n", c);

    return 0;
}
