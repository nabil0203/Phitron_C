// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/B

#include <stdio.h>
int main()
{
    int N, i;
    scanf("%d", &N);

    if (N == 1)
    {
        printf("-1");
    }
    else
    {
        for (i = 1; i <= N; i++)
        {
            if (i % 2 == 0)
            {
                printf("%d\n", i);
            }
        }
    }

    return 0;
}



/* optimized code


#include <stdio.h>

int main()
{
    int N;
    scanf("%d", &N);

    if (N < 2)
    {
        printf("-1");
    }
    else
    {
        for (int i = 2; i <= N; i += 2)        // Start from 2 and increment by 2
        {
            printf("%d\n", i);
        }
    }

    return 0;
}

 */