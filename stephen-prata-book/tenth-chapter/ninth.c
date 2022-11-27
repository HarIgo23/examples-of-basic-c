#include <stdio.h>

#define N 2
#define M 3

void copy(int n, int m, double target[n][m], const double source[n][m]);

int main(void)
{
    const double source[N][M] = {1.1, 2.2, 3.3, 4.4, 5.5, 6.6};
    double target[N][M];

    copy(N, M, target, source);

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
            printf("%.1lf,%.1lf  ", source[i][j], target[i][j]);
        printf("\n");
    }

    return 0;
}


void copy(int n, int m, double target[n][m], const double source[n][m])
{
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            target[i][j] = source[i][j];
}

