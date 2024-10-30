// https://codeforces.com/group/MWSDmqGsZm/contest/223205/problem/E

#include <stdio.h>
int main()
{
    int x, y;
    scanf("%d %d", &x, &y);

    int *p = &x, *q = &y;

    int temp = *p;
    *p = *q;
    *q = temp;

    printf("%d %d", *p, *q);

    return 0;
}