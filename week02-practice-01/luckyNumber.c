// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/I

#include <stdio.h>
int main()
{

    int x, digit1, digit2;
    scanf("%d", &x);

    digit1 = x % 10;
    x = x / 10;
    digit2 = x % 10;

    if (digit1 % digit2 == 0 || digit2 % digit1 == 0)
    {
        printf("YES");
    }
    
    else
        printf("NO");

    return 0;
}