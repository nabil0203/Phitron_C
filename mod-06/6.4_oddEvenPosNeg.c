// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

#include <stdio.h>
int main()
{

    int n, x;
    int countEven = 0, countOdd = 0, countPos = 0, countNeg = 0;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        // int x;
        scanf("%d", &x);

        if (x % 2 == 0)         // they counted 0 as even
        {
            // even
            countEven++;
        }
        else
        {
            // odd
            countOdd++;
        }

        if (x > 0)              // they counted 0 as neither positive nor negative
        {
            // positive
            countPos++;
        }
        else if (x < 0)
        {
            // negative
            countNeg++;
        }
    }

    printf("Even: %d\n", countEven);
    printf("Odd: %d\n", countOdd);
    printf("Positive: %d\n", countPos);
    printf("Negative: %d", countNeg);

    return 0;
}