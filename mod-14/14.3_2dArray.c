#include <stdio.h>
int main()
{
    int a[3][5];                                        // 3 array of 5 elements

    int b[2][3] = {{1, 2, 3}, {4, 5, 6}};               // 2 array of 3 elements



    // we need nested loop to access a 2D array
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", b[i][j]);                         // printing
        }
        printf("\n");
    }

    return 0;
}