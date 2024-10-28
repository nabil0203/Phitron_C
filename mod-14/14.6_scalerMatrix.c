/*
    5 0 0      ||    11  0   0     ||     3 0 0      ||    3 5 0
    0 5 0      ||     0  11  0     ||     0 4 0      ||    0 3 1
    0 0 5      ||     0  0  11     ||     0 0 4      ||    3 4 3

    square     ||     square       ||     square     ||    square
    diagonal   ||    diagonal      ||    diagonal    ||
    scaler     ||     scaler       ||                ||

*/


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    return 0;
}