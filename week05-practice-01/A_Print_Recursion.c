// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/A

#include <stdio.h>

void recursion(int a)
{
    if (a == 0)
    {
        return;
    }

    printf("I love Recursion\n");
    recursion(a - 1);
}

int main()
{

    int x;
    scanf("%d", &x);

    recursion(x);

    return 0;
}