// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/C

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int X[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (X[i] < 0)
        {
            printf("2 ");
        }
        else if (X[i] == 0)
        {
            printf("0 ");
        }
        else
            printf("1 ");
    }

    return 0;
}