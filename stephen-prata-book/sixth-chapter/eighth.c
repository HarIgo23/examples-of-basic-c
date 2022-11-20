#include <stdio.h>

#define ENTER_STR "Enter two floating point number using space(1.0 2.0) or q for exit: "

int main(void)
{
    float num1, num2;
    printf(ENTER_STR);
    while(scanf("%f%f", &num1, &num2) == 2)
    {
        printf("%f\n", (num1 - num2) / (num1 * num2));
        printf(ENTER_STR);
    }

    return 0;
}