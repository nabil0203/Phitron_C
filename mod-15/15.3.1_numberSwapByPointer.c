#include <stdio.h>
int main()
{

    int a = 53, b = 6;
    int *x = &a, *y = &b;               // here *x, *y is pointer

    printf("Before swapping:\n");
    printf("%d %d\n", a,b);


    // dereference

    int temp = *x;              // here *x refers the value(only x is address)
    *x = *y;                    // here *y refers the value(only y is address)
    *y = temp;


    printf("After swapping:\n");
    printf("%d %d", a,b);

    return 0;
}