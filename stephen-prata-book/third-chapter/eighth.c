#include <stdio.h>

#define PINT_TO_CUP 2.0
#define CUP_TO_OUNCE 8.0
#define OUNCE_TO_SPOON 2.0
#define SPOON_TO_TEASPOON 3.0

int main(void)
{
    float amount_cup;
    printf("Enter amount in cup: ");
    scanf("%f", &amount_cup);
    double amount_pint = amount_cup / PINT_TO_CUP;
    double amount_ounce = amount_cup * CUP_TO_OUNCE;
    double amount_spoon = amount_ounce * OUNCE_TO_SPOON;
    double amount_teaspoon = amount_spoon * SPOON_TO_TEASPOON;

    printf("pint: %2.2f, ounce: %4.f, spoon: %4.f, teaspoon: %4.f\n", amount_pint, amount_ounce, amount_spoon, amount_teaspoon);

    return 0;
}
