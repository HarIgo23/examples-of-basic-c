#include <stdio.h>

int isEven(int x)
{
    return x%2==0;
}

int isPositive(int x)
{
    return x>0;
}

void action(int (*condition)(int), int numbers[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if(condition(numbers[i]))
        {
            printf("%d \t", numbers[i]);
        }
    }
}


int main(void)
{
    int nums[] = {-5, -4, -3, -2, -1, 0, 1, 2, 3, 4, 5};
    int n = sizeof(nums)/sizeof(nums[0]);

    printf("\n Even numbers: ");
    action(isEven, nums, n);

    printf("\n Positive numbers: ");
    action(isPositive, nums, n);

    printf("\n");
    return 0;
}
