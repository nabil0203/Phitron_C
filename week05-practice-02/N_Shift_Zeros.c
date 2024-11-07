// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/N

//bujhi nai

#include <stdio.h>

void shift_zero(int a[], int n)
{
    int j = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != 0)
        {
            int temp = a[i];
            a[i] = a[j];
            a[j] = temp;
            j++;
        }
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    int a[n + 1];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    shift_zero(a, n);

    return 0;
}