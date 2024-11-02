#include <stdio.h>

void swap(int *x, int *y)               // getting the address of a,b
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main()
{

    int a = 8, b = 3;

    printf("before swap\n");
    printf("a=%d b=%d\n", a, b);

    swap(&a, &b);               // sending the address

    printf("after swap\n");
    printf("a=%d b=%d", a, b);

    return 0;
}