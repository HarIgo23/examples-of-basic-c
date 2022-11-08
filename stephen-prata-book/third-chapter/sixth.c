#include <stdio.h>

#define WEIGHT_ONE_WATER_MOLECULE_GRAM 3e-23
#define QUART_TO_GRAM 950

int main(void)
{
    int quart_amount;
    printf("Enter amount of water quart: ");
    scanf("%d", &quart_amount);
    double mc = (quart_amount * QUART_TO_GRAM) / WEIGHT_ONE_WATER_MOLECULE_GRAM;
    printf("Amount of molecule: %e\n", mc);
    printf("Amount of molecule: %f\n", mc);

    return 0;
}
