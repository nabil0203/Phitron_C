// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

// not solved

#include <stdio.h>
int main()
{
    int s[1000], i, j;
    scanf("%s", &s);

    int flag = 0;
    for (i = 0, j = strlen(s)-1; i <= strlen(s), j >= 0; i++, j--)
    {
        if (s[i] != s[j])
        {
            flag++;
            break;
        }
    }

    if (flag == 0)
    {
        printf("YES");
    }
    else
        printf("NO");

    return 0;
}