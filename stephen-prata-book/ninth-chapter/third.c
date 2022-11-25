#include <stdio.h>

void chline(char ch, int i, int j);


int main(void)
{
    chline('*', 3, 4);

    return 0;
}

void chline(char ch, int n, int m)
{
    for (int i = 0; i < n; i++)
    {
        for(int j = 0; j < m; j++)
            printf("%c", ch);
        printf("\n");
    }
}
