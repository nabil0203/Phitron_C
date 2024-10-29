#include <stdio.h>
int main()
{
    {

        int a = 5;
        int *b = &a;                // the address of variable 'a' is stored in 'b' pointer; & must

        printf("%d\n", b);          // prints the address of 'a' (random)

        printf("%d", *b);           // prints the value 'a'

        return 0;
    }
}