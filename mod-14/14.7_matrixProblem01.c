// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/T

#include <stdio.h>
#include <math.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int sum1 = 0, sum2 = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)                     // main diagonal
            {
                sum1 = sum1 + a[i][j];
            }

            if (i + j == n - 1)                     // secondary diagonal
            {
                sum2 = sum2 + a[i][j];
            }
        }
    }

    /*
      // normal method of removing negative
      int ans = sum1 - sum2;

            if (ans < 0)
            {
                ans = ans * (-1);
            }
    */

    int ans = abs(sum1 - sum2);                 // using library function
    printf("%d", ans);

    return 0;
}