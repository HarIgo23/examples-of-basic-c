#include <stdio.h>

#define INCH_TO_CM 2.54f

int main(void)
{
    int cm;
    printf("Enter your height(cm): ");
    scanf("%d", &cm);
    printf("Your height in inches: %f\n", (float)cm / INCH_TO_CM);

    return 0;
}
