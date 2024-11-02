#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;

    return sum;                     // whenever return is found, the function will be terminated

    int x = 0;                      // this line won't execute
}

int main()
{

    int result = add(10, 22);

    printf("%d", result);

    return 0;
}