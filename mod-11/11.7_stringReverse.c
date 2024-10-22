#include <stdio.h>
#include <string.h>

int main()
{
    // No built in function for reverse; bcz it isn't included as a in built library function of C

    char X[20] = "abcd";

    int len = strlen(X);
    for (int i = 0, j = len - 1; i <= j; i++, j--)
    {
        char temp = X[i];
        X[i] = X[j];
        X[j] = temp;
    }

    printf("%s", X);

    return 0;
}