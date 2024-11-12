// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-2-2

#include <stdio.h>
#include <string.h>
int main()
{

    char s[100001];

    scanf("%s", s);

    int length = strlen(s);

    int count = 0;

    for (int i = 0; i < length; i++)
    {
        if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u')
        {
            continue;
        }
        else
            count++;
    }

    printf("%d", count);

    return 0;
}