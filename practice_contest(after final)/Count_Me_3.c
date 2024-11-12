// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-3

#include <stdio.h>
#include <string.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        char s[100001];
        scanf("%s", s);

        int count1 = 0, count2 = 0, count3 = 0;

        for (int i = 0; i < strlen(s); i++)
        {
            if (s[i] >= 65 && s[i] <= 90)
            {
                count1++;
            }
            if (s[i] >= 97 && s[i] <= 122)
            {
                count2++;
            }
            if (s[i] >= 48 && s[i] <= 57)
            {
                count3++;
            }
        }

        printf("%d %d %d\n", count1, count2, count3);
    }

    return 0;
}