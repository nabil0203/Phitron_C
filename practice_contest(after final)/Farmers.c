// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/farmers-1

#include <stdio.h>
int main()
{

    int t, m1, m2, d, m, ans, final;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        scanf("%d %d %d", &m1, &m2, &d);

        m = m1 + m2;

        ans = (m1 * d) / m;

        final = d - ans;

        printf("%d\n", final);
    }

    return 0;
}