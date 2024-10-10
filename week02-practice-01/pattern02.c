/*
5 4 3 2 1
4 3 2 1
3 2 1
2 1
1
*/

#include <stdio.h>
int main()
{
    for (int i = 5; i >= 1; i--)            //row
    {
        for (int j = i; j >= 1; j--)            //col
        {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}