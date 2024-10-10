// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <stdio.h>
int main()
{

    char X;
    scanf("%c", &X);

    if (X >= '1' && X <= '9')
    {
        printf("IS DIGIT\n");
    }

    else
    {
        printf("ALPHA\n");

        if (X >= 'A' && X <= 'Z')
        {
            printf("IS CAPITAL\n");
        }
        else
            printf("IS SMALL\n");
    }

    return 0;
}