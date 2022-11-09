#include <stdio.h>

int main(void)
{
    float number;

    printf("Enter number : ");
    scanf("%f", &number);

    printf("Number: %.1f or %.1e\n", number, number); // a
    printf("Number: %+.3f or %.3E\n", number, number); // b

    return 0;
}
