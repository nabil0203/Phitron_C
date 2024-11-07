// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/J

#include <stdio.h>

long long factorial(int n)
{
    if (n == 0)
    {
        return 1;               // bcz 0!=1  (we know this value, that's why we took this as a base case)
    }

    return n * factorial(n - 1);
}

int main()
{

    int n;
    scanf("%d", &n);

    printf("%lld", factorial(n));

    return 0;
}

/*

5! = 5 * 4!
4! = 4 * 3!
3! = 3 * 2!
n! = n * (n-1)!


*/