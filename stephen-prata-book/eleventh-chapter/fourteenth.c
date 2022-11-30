#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    if (argc != 3)
    {
        printf("Enter float number and int as argument(./e14 0.5 2)\n");
        return -1;
    }
    int power;
    double number, res;
    number = atof(argv[1]);
    power = atoi(argv[2]);
    res = pow(number, (double)power);
    printf("%.2lf^%d = %.2lf\n", number, power, res);
    printf ("\n");
    return 0;
}