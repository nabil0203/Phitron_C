// https://www.hackerrank.com/contests/b6-final-c/challenges/visiting-monument

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        int a;
        scanf("%d", &a);
        
        for (int j = 1; j <= a; j++)
        {
            printf("%d ",j);

        }
        for (int k = a - 1; k >= 1; k--)
        {
            printf("%d ", k);
        }
        printf("\n");
    }

    return 0;
}