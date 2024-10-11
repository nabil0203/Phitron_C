// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/F


#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 1; i <= 12; i++)
    {
        printf("%d * %d = %d\n", x, i, i * x);
    }

    return 0;
}