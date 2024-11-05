#include <stdio.h>

void printArray(int x[], int z)                     // receiving array & size
{
    for (int i = 0; i < z; i++)
    {
        printf("%d ", x[i]);
    }
}

int main()
{
    int a[3] = {23, 4, 53};

    printArray(a, 3);                   // passing array & size

    return 0;
}