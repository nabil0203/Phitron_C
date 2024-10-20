#include <stdio.h>
int main()
{

    char X[100];

    fgets(X, sizeof(X), stdin); // another way of input

    fputs(X,stdout);

    return 0;
}