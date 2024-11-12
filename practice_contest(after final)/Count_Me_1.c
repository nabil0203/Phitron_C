// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/count-me-2-1

#include <stdio.h>
int main()
{

    int n, count1 = 0, count2 = 0;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);

        if (a[i] % 2 == 0 && a[i] % 3 == 0)
        {
            count1++;
        }
        else
        {
            if (a[i] % 2 == 0)
            {
                count1++;
            }

            if (a[i] % 3 == 0)
            {
                count2++;
            }
        }
    }

    printf("%d %d", count1, count2);

    return 0;
}