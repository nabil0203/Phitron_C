/*
    5 0 0      ||    11  0   0     ||     3 0 0      ||     2 0 0     ||    3 5 0      ||    4 0 1
    0 5 0      ||     0  11  0     ||     0 4 0      ||     0 0 0     ||    0 3 1      ||    0 5 0
    0 0 5      ||     0  0  11     ||     0 0 4      ||     0 0 9     ||    3 0 3      ||    3 3 6

    square     ||     square       ||     square     ||    square     ||    square     ||    square
    diagonal   ||    diagonal      ||    diagonal    ||    diagonal   ||
    scaler     ||     scaler       ||                ||               ||


    1. check main diagonal row no, col no same
    2. check main diagonal values are same
    3. all the other elements are 0

*/


#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    int element = a[0][0];                   // value of (0,0)index
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i == j)                         // each diagonals index are equal--> like (0,0) (1,1) (2,2)
            {
                if (a[i][j] != element)                      // the diagonals value are not same
                {
                    // not scaler
                    flag++;
                    break;
                }
            }
            else
            {
                if (a[i][j] != 0)                           // the other values, except diagonals, are not 0
                {
                    // not scaler
                    flag++;
                    break;
                }
            }
        }
    }

    if (flag == 0)
    {
        printf("Scaler");
    }
    else
        printf("Not Scaler");

    return 0;
}