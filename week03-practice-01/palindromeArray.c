// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/G

#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);

    int a[n];
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int flag = 0;

    for (i = 0, j = n - 1; i < n, j >= 0; i++, j--)
    {
        if (a[i] != a[j])
        {
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}