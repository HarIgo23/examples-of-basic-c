#include <stdio.h>

int main(void)
{
    int number1, number2;
    printf("Return number1 %% number2\n");
    printf("Enter number1 or 0 for exit: ");
    scanf("%d", &number1);

    while (number1 > 0)
    {
        printf("Enter number2: ");
        scanf("%d", &number2);
        printf("Result %d %% %d = %d\n", number1, number2, number1 % number2);
        printf("Enter number1 or 0 for exit: ");
        scanf("%d", &number1);
    }

    return 0;
}