/*
In this problem you will be given an integer N and you will have to print a pattern with N numbers.
For example if N = 4, the pattern will be.
1
12
123
1234
 123
  12
   1
See input samples for better understanding.

------>Input Format:
The input will contain a single integer N. Constraints 1 <= N <= 9

------>Output Format:
Print a pattern with N numbers according to the description.


Sample Input 1:
3
Sample Output 1:
1
12
123
 12
  1

Sample Input 2:
5
Sample Output 2:
1
12
123
1234
12345
 1234
  123
   12
    1

*/

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int k = 1; k <= i; k++)
        {
            printf("%d", k);
        }
        printf("\n");
    }
    for (int i = n; i >= 1; i--)
    {

        for (int j = 0; j <= n - i; j++)
        {
            printf(" ");
        }

        for (int k = 1; k <= i - 1; k++)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}