#include <stdio.h>

int main(void)
{
    float num;
    printf("Enter floating-point number: ");
    scanf("%f", &num);
    printf("Common: %f\n", num);
    printf("Science: %e\n", num);
    printf("Binary exponencial: %a\n", num);

    return 0;
}