#include <stdio.h>

// int a[100000]; 
int main()
{

    int length;
    scanf("%d", &length);
    int a[length];

    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Before inserting\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }



    int index, value;
    scanf("%d %d", &index, &value);

    printf("\nAfter inserting %d in %d index\n", value, index);

    length++;                               // increasing the array length bcz we need extra space for new element

    for (int i = length - 1; i >= index; i--)
    {
        a[i + 1] = a[i];                        // moving each value 1 index right till the desired index
    }

    a[index] = value;                           // inserting the value into desired index bcz that index is safe to overwrite as it has moved to the next index

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}