#include <stdio.h>
int main()
{
    int a[5] = {2, 23, 5, 12, 55};

    int *p = a;                             // we don't need '&' like variable; bcz the of name array automatically stores the address


    printf("%d\n", &a[0]);                              // address of 1st index
    printf("%d\n", p);                                  // address of 1st index by pointer


    printf("%d\n", &a[1]);                                  // address of 2nd index
    printf("%d\n", p + 1);                               // address of 2nd index by pointer



    return 0;
}