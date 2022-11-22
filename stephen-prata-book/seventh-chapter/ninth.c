#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int num;
    bool is_simple = true;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("Prime numbers before %d:\n", num);
    for (int i = 2; i < num; i++)
    {
        if (i % 2 == 0)
            continue;
        for (int j = 3; j < i / 2; j += 2)
            if (i % j == 0)
                is_simple = false;
        if (is_simple)
            printf("%d\n", i);
        else
            is_simple = true;
    }

    return 0;
}