// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/unit-matrix

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];
    int count = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
            if (i == j)
            {
                if (a[i][j] != 1)
                {
                    count++;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)
                {
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

    return 0;
}