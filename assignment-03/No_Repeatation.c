// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/no-repeatation

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    int f[100001] = {0};
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
        f[a[i]] += 1;
    }

    int count = 0;

    for (int i = 0; i < 100001; i++)
    {
        if (f[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);

    return 0;
}