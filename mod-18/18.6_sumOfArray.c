#include <stdio.h>

int a[10000], sum;

void goToIndex(int i, int n)
{
    if (i == n)
    {
        return;
    }

    sum = sum + a[i];


    goToIndex(i + 1, n);
}



int main()
{
    int x;
    scanf("%d", &x);

    for (int i = 0; i < x; i++)
    {
        scanf("%d", &a[i]);
    }

    sum = 0;

    goToIndex(0, x);

    printf("%d", sum);

    return 0;
}