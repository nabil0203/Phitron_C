#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);                  // size of the array

    int x[n];                          // array declaration

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);               // array element input
    }


    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + x[i];                   // adding the value of the array one by one into sum variable
    }


    printf("Sum of this array is %d", sum);

    return 0;
}