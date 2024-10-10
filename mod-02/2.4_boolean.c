#include <stdio.h>
#include <stdbool.h>        // for boolean data type
int main()
{
    int a = 5, b = 8;

    bool x = a < b;

    printf("%d", x);            // if true output: 1, if false: 0

    return 0;
}