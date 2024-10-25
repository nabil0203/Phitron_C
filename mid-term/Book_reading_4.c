// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/book-reading-4

#include <stdio.h>
int main()
{
    int n, t;
    scanf("%d %d", &n, &t);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int sum = 0, count = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + x[i];
        if (sum > t)
        {
            break;
        }
        count++;
    }

    printf("%d", count);

    return 0;
}