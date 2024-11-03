#include <stdio.h>

void print_num(int a, int n)
{

    if (a > n)
    {
        return;                      // base case; stop
    }


    printf("%d ", a);

    print_num(a + 1, n);             // recursive call; incrementing the 'a', but the limit-->'n' is always same that's why it has not changed

}


int main()
{

    print_num(1, 5);            // function used to print 1 to 5

    return 0;
}