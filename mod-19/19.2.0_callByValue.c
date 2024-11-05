#include <stdio.h>

void func(int x)
{

    x = x * 10;

    printf("User Defined function: %d\n", x);                          // value updates
}

int main()
{

    int a = 10;

    func(a);                                               // passing the value

    printf("Main function: %d\n", a);                            // value stays the same '10'

    return 0;
}