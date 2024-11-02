#include <stdio.h>

int add()
{
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a + b;

    return sum;
}

int main()
{
    printf("%d\n", add());
    printf("%d\n", add());



    // int result = add();
    // printf("%d", result);

    return 0;
}