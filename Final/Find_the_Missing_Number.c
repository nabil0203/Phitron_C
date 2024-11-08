// https://www.hackerrank.com/contests/b6-final-c/challenges/find-the-missing-number-11-3

#include <stdio.h>
int main()
{

    long long int t, j;
    scanf("%lld", &t);

    for (int i = 0; i < t; i++)                     // for each array
    {
        long long int a[4];

        for (j = 0; j < 4; j++)
        {
            scanf("%lld", &a[j]);               // each array input
        }

        long long int mul = 1;
        for (int j = 1; j < 4; j++)
        {
            mul = mul * a[j];                   // mul of last 3 element
        }

        if (a[0] % mul != 0)
        {
            printf("-1 \n");
        }

        else
            printf("%lld \n", a[0] / mul);
    }

    return 0;
}