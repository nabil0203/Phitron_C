// https://www.hackerrank.com/contests/b6-assignment-03-c/challenges/difference-16-1

#include <stdio.h>
#include <stdlib.h>
int main()
{

    int a, b;
    scanf("%d %d", &a, &b);

    int *p = &a;
    int *q = &b;

    printf("%d", abs(*p - *q));

    return 0;
}