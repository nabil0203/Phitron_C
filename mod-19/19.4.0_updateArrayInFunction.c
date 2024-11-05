#include <stdio.h>

void printArray(int x[], int z)
{

    printf("User defined:\n");
    for (int i = 0; i < z; i++)
    {
        printf("%d ", x[i]);
    }

    x[0] = 222;                     // updating a value
}

int main()
{
    int a[3] = {23, 4, 53};

    printArray(a, 3);

    printf("\nMain function:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}