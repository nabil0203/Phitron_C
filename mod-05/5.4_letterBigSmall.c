// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/M

#include <stdio.h>
int main()
{

    char X;
    scanf("%c", &X);

    if (X >= 48 && X <= 58)            // direct comparing the ASCII value
    {
        printf("IS DIGIT\n");
    }

    else if (X >= 65 && X <= 90 || X >= 97 && X <= 122)         // direct comparing the ASCII value
    {
        printf("ALPHA\n");

        if (X >= 65 && X <= 90)                             // direct comparing the ASCII value
        {
            printf("IS CAPITAL\n");
        }
        else
            printf("IS SMALL\n");
    }

    return 0;
}