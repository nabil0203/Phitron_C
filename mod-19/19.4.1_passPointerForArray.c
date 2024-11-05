#include <stdio.h>

void printArray(int *x, int z)                  // receiving as address/pointer
{

    printf("User defined:\n");
    for (int i = 0; i < z; i++)
    {
        printf("%d ", x[i]);
    }

    x[0] = 100;                     // updating value
}

int main()
{
    int a[3] = {23, 4, 53};

    printArray(a, 3);                   // passing

    printf("\nMain function:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}