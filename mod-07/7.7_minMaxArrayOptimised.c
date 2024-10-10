#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);                    // size of the array

    int x[n];                           // array declaration

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x[i]);                     // array element input
    }


    int max = x[0], min = x[0];                     // check notebook A-40 page

    for (int i = 0; i < n; i++)
    {
        if (x[i] < min)
        {
            min = x[i];
        }
        if (x[i] > max)
        {
            max = x[i];
        }
    }

    printf("Max = %d\n", max);
    printf("Min = %d", min);

    return 0;
}