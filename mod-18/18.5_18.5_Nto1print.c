#include <stdio.h>

void print_num(int a, int n)
{

    if (a > n)
    {
        return;                      // base case; stop
    }

    print_num(a + 1, n);

    printf("%d ", a);               // printing the returns
}


int main()
{

    print_num(1, 5);            // function used to print 1 to 5

    return 0;
}