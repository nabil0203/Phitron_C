#include <stdio.h>
int main()
{
    int a;
    float b;

    scanf("%d %f", &a, &b);

    printf("%.2f", a / b);

    return 0;
}