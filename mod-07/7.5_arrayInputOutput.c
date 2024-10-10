#include <stdio.h>
int main()
{
    int X[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &X[i]);             // taking input
    }


    printf("%d\n\n", X[3]);             // printing index 3 value


    for (int i = 0; i < 5; i++)
    {
        printf("%d\n", X[i]);           // printing all the value of array
    }
    
    return 0;
}