// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K
// used two different approach for Min & Max

#include <stdio.h>
int main()
{
    int A, B, C;
    scanf("%d %d %d", &A, &B, &C);

    // min calculation

    if (A <= B)         //B is getting removed
    {
        // a,c compare
        if (A <= C)
        {
            printf("%d ", A);
        }
        else
            printf("%d ", C);
    }
    else
    {
        // b,c
        if (B <= C)
        {
            printf("%d ", B);
        }
        else
            printf("%d ", C);
    }



    // max calculation
    if (A >= B && A >= C)
    {
        printf("%d", A);
    }
    else if (B >= A && B >= C)
    {
        printf("%d", B);
    }
    else
        printf("%d", C);

    return 0;
}