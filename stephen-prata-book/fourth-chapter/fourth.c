#include <stdio.h>

int main(void)
{
    int height;
    printf("Enter your height(cm): ");
    scanf("%d", &height);

    float height_in_meter = (float)(height * .01);
    printf("You height(m): %.2f\n", height_in_meter);

    return 0;
}