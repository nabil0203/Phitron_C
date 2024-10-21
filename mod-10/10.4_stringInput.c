#include <stdio.h>
int main()
{

    char X[100];

    scanf("%[^\n]s", &X);            // to take input with space; '&' doesn't matter

    printf("%s", X);

    return 0;
}