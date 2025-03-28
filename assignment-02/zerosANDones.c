/*
In this problem you will be given an integer N, followed by an array containing N numbers.
Each numbers will be either 0 or 1.
You will also be an integer X.
You will have to toggle the X_th value in the array. Toggle means if the value is 0, you will make it 1 and if it is 1 you have to make it 0.
Then you have to print the array.

------>Input Format:
The first line will contain a single integer N.
The second line will contain N integers.
The third line will contain a single integer X.

Constraints 1 <= N, X <= 100000
Each N numbers will be either 0 or 1.

------>Output Format:
Print the array after updating.


Sample Input 1:
5
0 1 1 0 0
4
Sample Output 1:
0 1 1 1 0


Sample Input 2:
4
0 1 1 1
1
Sample Output 2:
1 1 1 1

*/



#include <stdio.h>
int main()
{

    int n, z;
    scanf("%d", &n);

    int x[n];

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &x[i]);
    }

    scanf("%d", &z);

    for (int i = 1; i <= n; i++)
    {

        if (x[z] == 0)
        {
            x[z] = 1;                   // changing the value of desired index
            break;
        }
        if (x[z] == 1)
        {
            x[z] = 0;
            break;
        }
    }

    
    for (int i = 1; i <= n; i++)                // printing the latest array
    {
        printf("%d ", x[i]);
    }

    return 0;
}