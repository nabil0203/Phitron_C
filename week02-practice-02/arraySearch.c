// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/B

#include <stdio.h>
int main()
{

    int n, i;
    scanf("%d", &n);

    int x[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int z, flag = 0;
    scanf("%d", &z);
    for (int i = 0; i < n; i++)
    {
        if (z == x[i])
        {
            printf("%d", i);
            flag++;
            break;
        }
    }
    if (flag == 0)
    {
        printf("-1");
    }

    return 0;
}