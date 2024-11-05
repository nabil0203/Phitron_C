#include <stdio.h>

void func(int *x)
{

    *x = *x * 10;                                 // dereferencing(working with the value)

    printf("User Defined function: %d\n", *x);                      // value updates in the address
}

int main()
{

    int a = 10;

    func(&a);                                   // passing the address

    printf("Main function: %d\n", a);                       // value updates same as the user defined function

    return 0;
}