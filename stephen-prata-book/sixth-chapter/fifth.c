#include <stdio.h>

int main(void)
{
    char ch;
    printf("Enter char from alphabet in UPPERCASE: ");
    scanf("%c", &ch);
    int diff = ch - 'A' + 1;

    for (int i = 1; i <= diff; i++)
    {
        for (int j = 0; j < diff - i; j++)
            printf(" ");
        for (int j = 0; j < i; j++)
            printf("%c", 'A' + j);
        for (int j = i - 2; j >= 0; j--)
            printf("%c", 'A' + j);
        printf("\n");
    }
    return 0;
}