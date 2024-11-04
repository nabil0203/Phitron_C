// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/A

#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    printf("%d", add(x, y));

    return 0;
}