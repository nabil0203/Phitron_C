// https://www.hackerrank.com/contests/b6-final-c/challenges/jadu-matrix

#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int a[n][m];
    int count = 0;

    if (n != m)
    {
        printf("NO");
    }

    else
    {

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                scanf("%d", &a[i][j]);

                if (i == j || (i + j == n - 1))
                {
                    if (a[i][j] != 1)
                    {
                        // no
                        count++;
                        break;
                    }
                }
                else
                {
                    if (a[i][j] != 0)
                    {
                        // no
                        count++;
                        break;
                    }
                }
            }
        }

        if (count == 0)
        {
            printf("YES");
        }
        else
            printf("NO");
    }

    return 0;
}