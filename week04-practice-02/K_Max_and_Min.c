// https://codeforces.com/group/MWSDmqGsZm/contest/219158/problem/K

#include <stdio.h>
int main()
{

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int *x = &a;
    int *y = &b;
    int *z = &c;


    // min
    if (*x <= *y && *x <= *z)
    {
        // a min
        printf("%d ", *x);
    }
    else if (*y <= *z && *y <= *z)
    {
        // b min
        printf("%d ", *y);
    }
    else
    {
        // c min
        printf("%d ", *z);
    }





    // max
    if (*x >= *y && *x >= *z)
    {
        // a max
        printf("%d", *x);
    }
    else if (*y >= *z && *y >= *z)
    {
        // b max
        printf("%d", *y);
    }
    else
    {
        // c max
        printf("%d", *z);
    }

    return 0;
}