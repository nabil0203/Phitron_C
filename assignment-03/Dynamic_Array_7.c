// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/dynamic-array-7

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;

    scanf("%d", &N);

    int *X = (int *)malloc(1 * sizeof(int));

    if (X == NULL)
    {
        printf("allocation failed");
        return 1;
    }

    // Insert each number into the X
    for (int i = 0; i < N; i++)
    {
        // Read the next integer
        int num;
        scanf("%d", &num);

        // Resize the X to hold one more element
        int *temp = (int *)realloc(X, (i + 1) * sizeof(int));
        if (temp == NULL)
        {
            printf("allocation failed");
            return 1;
        }
        // Update the pointer to the newly allocated memory
        X = temp;

        // Insert the number into the X
        X[i] = num;
    }

    for (int i = 0; i < N; i++)
    {
        printf("%d ", X[i]);
    }

    free(X);

    return 0;
}