// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/C

#include <stdio.h>

void print_num(int a)
{
    if (a == 1)
    {
        printf("%d", a);
    }
    else
    {

        printf("%d ", a);
        print_num(a - 1);
    }
}

int main()
{

    int n;
    scanf("%d", &n);

    print_num(n);

    return 0;
}