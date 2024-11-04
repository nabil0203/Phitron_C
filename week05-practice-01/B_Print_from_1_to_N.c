// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/B

#include <stdio.h>

void print_num(int a, int x)
{
    if (a > x)
    {
        return;
    }

    printf("%d\n", a);
    print_num(a + 1, x);
}

int main()
{

    int n;
    scanf("%d", &n);

    print_num(1, n);

    return 0;
}