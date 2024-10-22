// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/F

#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    char S[100];

    for (int i = 0; i < t; i++)
    {
        scanf("%s", S);

        if (strlen(S) <= 10)                // comparing the length by strlen function; 
        {
            printf("%s", S);
        }

        else
        {
            printf("%c%d%c", S[0], strlen(S) - 2, S[strlen(S) - 1]);                    // printing the first char, the inside length, and the last value
        }
        printf("\n");
    }

    return 0;
}