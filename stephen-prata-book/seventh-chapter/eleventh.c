#include <stdio.h>

#define ARTICHOKE_PRICE_PER_POUND 2.05
#define BEET_PRICE_PER_POUND 2.05
#define CARROT_PRICE_PER_POUND 2.05
#define FIRST_CLASS_LIMIT 5
#define FIRST_CLASS_PRICE 6.50
#define SECOND_CLASS_LIMIT 20
#define SECOND_CLASS_PRICE 14.00
#define THIRD_CLASS_PRICE_PER_POUND 0.50
#define DISCOUNT_ABOVE_LIMIT 100
#define DISCOUNT_ABOVE_REVERSE (1 - 0.05)

int main(void)
{
    char option;
    int weight, overall_weight, a_weight = 0, b_weight = 0, c_weight = 0;
    double delivery_cost, sum, overall_sum;

    printf("Choose your vegetable - a) artichoke, b) beet, c) carrot, q) payment\n");
    while (scanf("%c", &option) == 1 && option != 'q')
    {
        if (option < 'a' || option > 'c')
        {
            printf("Incorrect option: %c. Try again.", option);
            continue;
        }
        printf("Enter weight of product in pound(1): ");
        scanf("%d", &weight);
        while (getchar() != '\n')
            continue;

        switch (option)
        {
            case 'a':
                a_weight += weight;
                break;
            case 'b':
                b_weight += weight;
                break;
            case 'c':
                c_weight += weight;
                break;
            default:
                break;
        }

        overall_weight = a_weight + b_weight + c_weight;
        if (overall_weight < FIRST_CLASS_LIMIT)
            delivery_cost = FIRST_CLASS_PRICE;
        else if (overall_weight < SECOND_CLASS_LIMIT)
            delivery_cost = SECOND_CLASS_PRICE;
        else
            delivery_cost = SECOND_CLASS_PRICE + (overall_weight - SECOND_CLASS_LIMIT) * THIRD_CLASS_PRICE_PER_POUND;

        sum = a_weight * ARTICHOKE_PRICE_PER_POUND;
        sum += b_weight * BEET_PRICE_PER_POUND;
        sum += c_weight + CARROT_PRICE_PER_POUND;

        if (sum >= DISCOUNT_ABOVE_LIMIT)
            overall_sum = sum * DISCOUNT_ABOVE_REVERSE;
        else
            overall_sum = sum;

        overall_sum += delivery_cost;

        printf("Your current cart - a: %dlb, b: %dlb, c: %dlb, total: %dlb \n",
               a_weight, b_weight, c_weight, overall_weight);
        printf("Sum of your cart - price: %.2lf, price with discount(%s) and delivery(%.2lf): %.2lf\n",
               sum, sum >= DISCOUNT_ABOVE_LIMIT ? "Yes" : "No", delivery_cost, overall_sum);
        printf("Choose your vegetable - a) artichoke, b) beet, c) carrot, q) payment\n");
    }
    printf("You bought - a: %dlb, b: %dlb, c: %dlb, total: %dlb \n",
           a_weight, b_weight, c_weight, overall_weight);
    printf("You paid: %.2lf\n", overall_sum);
    printf("Bye!\n");

    return 0;
}
