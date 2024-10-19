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

    printf("Before Deletion\n");
    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    int index;
    scanf("%d", &index);

    printf("\nAfter deleting %d index\n", index);

    // check notebook A-45
    for (int i = index + 1; i < length; i++)
    {
        a[i - 1] = a[i];
    }

    length--;

    for (int i = 0; i < length; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}