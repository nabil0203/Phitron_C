// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/E

#include <stdio.h>
#include <string.h>
int main()
{
    char X[1000000];
    scanf("%s", X);

    int len = strlen(X);

    int sum = 0;
    for (int i = 0; i < len; i++)
    {
        int digit = X[i] - '0';
        sum = sum + digit;
    }
    printf("%d", sum);
    return 0;
}