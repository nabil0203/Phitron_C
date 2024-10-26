// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

#include <stdio.h>
int main()
{

    int n, m;
    scanf("%d %d", &n, &m);

    int x[n];
    int f[100000] = {0};

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        f[x[i]] = f[x[i]] + 1;
    }


    for (int i = 1; i <= m; i++)
    {
        printf("%d\n", f[i]);
    }

    return 0;
}