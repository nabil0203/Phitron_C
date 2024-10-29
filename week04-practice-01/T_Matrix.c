// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n][n];
    int sum1 = 0, sum2 = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);

            if (i == j)
            {
                sum1 += a[i][j];
            }
            
            if (i + j == n - 1)
            {
                sum2 += a[i][j];
            }
        }
    }

    printf("%d", abs(sum1 - sum2));

    return 0;
}