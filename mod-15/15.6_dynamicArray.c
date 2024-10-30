#include <stdio.h>
#include <stdlib.h>
int main()
{

    int *X = (int *)malloc(5 * sizeof(int));                    // dynamic array declaration of 5 elements; (*int) is casting malloc

    for (int i = 0; i < 5; i++)                             // value assign in array
    {
        X[i] = i + 1;
    }

    for (int i = 0; i < 5; i++)                                  // value print of array
    {
        printf("%d ", X[i]);
    }
    printf("\n");





    // resize starts

    int *temp = X;                                                      // keeping the pointer in temp

    X = (int *)realloc(X, 10 * sizeof(int));                            // realloc used to resize the array; here previous size 5, we want to add more 5 then the total size is 10

    if (X == NULL)                                                  // if the pointer returns NULL value
    {
        X = temp;
    }


    for (int i = 5; i < 10; i++)
    {
        X[i] = 100;                                                // new value is inserting 'after' the previous values; that's why starts from 5 index
    }


    for (int i = 0; i < 10; i++)                                 // printing the full array after resizing
    {
        printf("%d ", X[i]);
    }


    free(X);                                                // free up the pointer for later usage



    return 0;
}