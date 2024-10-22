// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/G

#include <stdio.h>
int main()
{

    char x[100000];
    scanf("%s", x);

    for (int i = 0; i < strlen(x); i++)             // will go till the length of the string
    {
        if (x[i] >= 'a' && x[i] <= 'z')
        {
            x[i] = x[i] - 32;
        }

        else if (x[i] >= 'A' && x[i] <= 'Z')
        {
            x[i] = x[i] + 32;
        }

        else if (x[i] == ',')
        {
            x[i] = ' ';
        }
    }

    printf("%s\n", x);

    return 0;
}