// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/count-in-matrix

#include <stdio.h>
int main()
{
    int n, m, x;
    scanf("%d %d %d", &n, &m, &x);

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int p[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &p[i]);
        
        int count = 0;

        for (int k = 0; k < n; k++)
        {
            for (int j = 0; j < m; j++)
            {
                if (p[i] == a[k][j])
                {
                    count++;
                }
            }
        }
        printf("%d\n", count);
    }
    return 0;
}