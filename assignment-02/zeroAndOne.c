/*
In this problem you will be given an integer N, followed by N numbers.
Each numbers will be either 0 or 1.
You need to print two integers, The first one will be the number of 0's and the second one will be the number of 1' s in the input.

------>Input Format:
The first line will contain a single integer N.
The second line will contain N integers.

Constraints 1 <= N <= 100000
Each N numbers will be either 0 or 1.

------>Output Format:
Print two space separated integers, total number of 0's and 1's.


Sample Input 1:
10
0 0 1 0 1 0 0 0 1 1

Sample Output 1:
6 4

*/




#include <stdio.h>
int main()
{

    int n, sum1 = 0, sum2 = 0;
    scanf("%d", &n);

    int x[n];

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);
        
        if (x[i] == 0)
        {
            sum1 = sum1 + 1;
        }
        if (x[i] == 1)
        {
            sum2 = sum2 + 1;
        }
    }

    printf("%d %d", sum1, sum2);

    return 0;
}