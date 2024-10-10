#include <stdio.h>
#include <limits.h>
int main()
{
    int n;
    scanf("%d", &n);                      // size of the array

    int x[n];                           // array declaration

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);                             // array element input
    }

    int max = INT_MIN, min = INT_MAX;                    // check notebook A-39 page
    for (int i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
        if (x[i] > max)
        {
            max = x[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}