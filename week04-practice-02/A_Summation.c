// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/A

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int n, sum = 0;
    scanf("%d", &n);

    int *X = (int *)malloc(n * sizeof(int));

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &X[i]);
        sum = sum + X[i];
    }

    printf("%d", abs(sum));

    free(X);

    return 0;
}