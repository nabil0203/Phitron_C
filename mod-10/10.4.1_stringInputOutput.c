#include <stdio.h>
int main()
{

    char X[100];

    fgets(X, sizeof(X), stdin);         // another way of input

    fputs(X,stdout);                    // another way of output

    return 0;
}