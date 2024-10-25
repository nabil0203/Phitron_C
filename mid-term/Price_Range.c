// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/price-range

#include <stdio.h>
int main()
{

    int n, x, y;
    scanf("%d %d %d", &n, &x, &y);

    int p[n], count = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);

        if (p[i] >= x && p[i] <= y)
        {
            count++;
        }
    }
    printf("%d",count);

    return 0;
}