// https://www.hackerrank.com/contests/b6-final-c/challenges/swap-in-matrix

#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    for (int i = 0; i < n; i++)
    {
        int temp = a[i][0];
        a[i][0] = a[i][m - 1];
        a[i][m - 1] = temp;
    }

    for (int j = 0; j < m; j++)
    {
        int temp1 = a[0][j];
        a[0][j] = a[n - 1][j];
        a[n - 1][j] = temp1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    return 0;
}