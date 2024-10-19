#include <stdio.h>
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);

    int a[n], b[m];



    printf("Before Coping\n");

    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);                 // scanning input of 'a' array
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);                // printing 'a' array
    }

    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);                // printing 'b' array; as it has not any value now, it will print some garbage value
    }



    printf("\n\nAfter Coping\n");

    for (int i = 0; i < m; i++)
    {
        b[i] = a[i];                // coping 'a', putting into 'b'
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");

    for (int i = 0; i < m; i++)
    {
        printf("%d ", b[i]);
    }
    return 0;
}