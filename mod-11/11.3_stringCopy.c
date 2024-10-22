#include <stdio.h>
#include <string.h>

int main()
{

    char a[20] = "hello";
    char b[20] = "kola kha";

    printf("Before Copy:\n");
    printf("%s %s\n", a, b);


    // copy a into b

    strcpy(b, a);                       // format--> (destination, source)

    printf("\nAfter Copy:\n");
    printf("%s %s", a, b);

    return 0;
}