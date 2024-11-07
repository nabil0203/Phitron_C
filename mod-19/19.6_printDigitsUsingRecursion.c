// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/D

#include <stdio.h>

void printdigits(int a)
{
    if (a == 0)
    {
        return;
    }

    int digit = a % 10;

    printdigits(a / 10);

    printf("%d ", digit);
}

int main()
{

    int n, a;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);

        if (a == 0)
        {
            printf("0");
        }


        printdigits(a);
        printf("\n");
    }

    return 0;
}