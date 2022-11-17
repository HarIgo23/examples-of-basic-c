#include <stdio.h>

#define INCH_TO_CM 2.54
#define FOOT_TO_CM 30.48

int main(void)
{
    float cm;
    printf("Enter height in cm or zero for exit: ");
    scanf("%f", &cm);
    while (cm > 0)
    {
        printf("%.1f cm = %d foots, %.1f inches\n", cm, (int)(cm / FOOT_TO_CM), cm / INCH_TO_CM);

        printf("Enter height in cm or zero for exit: ");
        scanf("%f", &cm);
    }

    return 0;
}