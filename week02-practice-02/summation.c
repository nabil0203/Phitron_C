// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int x[n];
    long long sum = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        sum = sum + x[i];
    }

    if (sum < 0)
    {
        sum = sum * (-1);
    }

    printf("%lld", sum);

    return 0;
}