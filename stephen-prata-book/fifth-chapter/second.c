#include <stdio.h>

int main(void)
{
    int number;
    printf("Enter number: ");
    scanf("%d", &number);
    int counter = -1;
    while (++counter <= 10)
    {
        printf("%d \t", number + counter);
    }
    printf("\n");

    return 0;
}