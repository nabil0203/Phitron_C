// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/G

#include <stdio.h>

void max(int a[], int n)
{
    int min = a[0];

    for (int i = 0; i < n; i++)
    {
        if (min > a[i])
        {
            min = a[i];
        }
    }
    printf("%d ", min);

    int max = a[0];

    for (int i = 0; i < n; i++)
    {
        if (max < a[i])
        {
            max = a[i];
        }
    }
    printf("%d", max);
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    max(a, n);

    return 0;
}