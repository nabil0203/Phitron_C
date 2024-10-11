// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/T

/*

   *
  ***
 *****
*******

*/

#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)                         // row
    {
        for (int j = 1; j <= n - i; j++)                // printing space
        {
            printf(" ");
        }
        for (int k = 1; k <= 2 * i - 1; k++)                // printing stars
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}