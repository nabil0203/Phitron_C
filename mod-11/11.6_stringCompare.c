#include <stdio.h>
#include<string.h>

int main()
{

    char a[10] = "ball";
    char b[10] = "bat";

    int cmp = strcmp(a, b);

    printf("%d", cmp);

    return 0;
}


// if a<b (a small means, a comes first in dictionary)
// output -

// if a>b (a big means, a comes later in dictionary)
// output +

// if a=b 
// output 0