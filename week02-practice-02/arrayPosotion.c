// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/D

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
        if (X[i] <= 10)
        {
            printf("A[%d] = %d\n", i, X[i]);
        }
    }

    return 0;
}