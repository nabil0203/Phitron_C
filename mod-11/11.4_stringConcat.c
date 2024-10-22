#include <stdio.h>
int main()
{
    char a[20] = "hello";
    char b[20] = "World?";


    // add b+a
    strcat(b,a);                // format---> (1st string, 2nd string)

    printf("%s",b);



    return 0;
}