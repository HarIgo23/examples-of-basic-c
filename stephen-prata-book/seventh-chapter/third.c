#include <stdio.h>

int main(void)
{
    int num, count_odd, sum_odd, count_even, sum_even;
    count_odd = count_even = sum_odd = sum_even = 0;
    printf("Enter the numbers: ");
    while(scanf("%d", &num) == 1 && num != 0)
    {
        if (num % 2 == 0)
        {
            count_even++;
            sum_even += num;
        } else
        {
            count_odd++;
            sum_odd += num;
        }
    }
    printf("Even - count: %d, sum: %d, mean: %.1lf\n", count_even, sum_even, (double)sum_even / count_even);
    printf("Odd - count: %d, sum: %d, mean: %.1lf\n", count_odd, sum_odd, (double)sum_odd / count_odd);

    return 0;
}