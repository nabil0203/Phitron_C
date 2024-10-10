// https://codeforces.com/group/MWSDmqGsZm/contest/326175/problem/C

#include <stdio.h>
int main()
{

    char x;
    scanf("%c", &x);

    if (x >= 'a' && x <= 'y')
    {
        x++;
    }
    else if (x == 'z')
    {
        x = 'a';
    }

    printf("%c", x);

    return 0;
}