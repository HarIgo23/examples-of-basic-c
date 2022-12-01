#include <stdio.h>

void print_count_calls(void);

int main()
{
    print_count_calls();
    print_count_calls();
    print_count_calls();

    return 0;
}

void print_count_calls(void)
{
    static int count_calls = 0;
    printf("%d\n", ++count_calls);
}
