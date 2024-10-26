#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
    }

    int f_arr[100000] = {0}; // full array initalized by 0

    for (int i = 0; i < n; i++)
    {
        f_arr[x[i]] = 1; // the index of f_arr is updated; this index is the same value of x[i]
    }

    for (int i = 0; i < 10; i++)
    {
        printf("%d %d\n", i, f_arr[i]); // showing the index with updated values
    }

    return 0;
}