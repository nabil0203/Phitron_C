// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/job-application-1

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);

        if (x[i] < 1)
        {
            printf("Entry-level candidate\n");
        }
        else if (x[i] >= 1 && x[i] <= 3)
        {
            printf("Junior candidate\n");
        }
        else if (x[i] >= 4 && x[i] <= 7)
        {
            printf("Mid-level candidate\n");
        }
        else if (x[i] > 7 && x[i] <= 20)
        {
            printf("Senior candidate\n");
        }
    }

    return 0;
}