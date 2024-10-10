// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/E

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int j = 1; j <= n; j++)
    {
        scanf("%d", &a[j]);
    }

    int pos = 1, min = a[1];
    for (int i = 1; i <= n; i++)
    {
        if (a[i] < min)
        {
            min = a[i];
            pos = i;
        }
    }
    printf("%d %d", min, pos);

    return 0;
}