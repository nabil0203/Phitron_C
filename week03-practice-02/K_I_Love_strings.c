// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/K

// not solved

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[51], t[51];
        scanf("%s %s", s, t);

        for (int i = 0, j = 0; i < strlen(s), j < strlen(t) - 1; i++, j++)
        {
            char temp = s[i + 1];
            s[i + 1] = t[j];
            t[j] = temp;
        }

        strcat(s, t);
        printf("%s", s);

        printf("\n");
    }

    return 0;
}