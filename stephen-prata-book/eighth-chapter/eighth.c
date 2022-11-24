#include <stdio.h>

float get_float(void);

int main(void)
{
    int option;
    float first_operand, second_operand, result;

    printf("Choose rate - a) +, b) -, c) *, d) /, q) Exit\n");
    while ((option = getchar()) != 'q')
    {
        if (option < 'a' || option > 'd')
        {
            printf("Incorrect option: %c. "
                   "Choose rate again - a) +, b) -, c) *, d) /, q) Exit\n", option);
            continue;
        }

        printf("Enter first operand(9.0): ");
        first_operand = get_float();
        printf("Enter first operand(3.0): ");
        second_operand = get_float();
        if (option == 'd' && second_operand == 0)
        {
            printf("Zero is incorrect number for divide. Try again: ");
            while ((second_operand = get_float()) == 0)
                printf("Zero is incorrect number for divide. Try again: ");
        }
        switch (option)
        {
            case 'a':
                result = first_operand + second_operand;
                break;
            case 'b':
                result = first_operand - second_operand;
                break;
            case 'c':
                result = first_operand * second_operand;
                break;
            case 'd':
                result = first_operand / second_operand;
                break;
            default:
                break;
        }


        printf("Result: %.2lf\n", result);
        printf("Choose rate - a) +, b) -, c) *, d) /, q) Exit\n");
        while (getchar() != '\n')
            continue;
    }
    printf("Bye!\n");

    return 0;
}

float get_float(void)
{
    float number;
    while (scanf("%f", &number) != 1)
    {
        while (getchar() != '\n')
            continue;
        printf("Incorrect input. Try again: ");
    }
    return number;
}




