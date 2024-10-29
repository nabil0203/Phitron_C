#include <stdio.h>
int main()
{
    {

        int a = 5;
        int *b = &a;

        printf("%d\n", a);

        *b = 6; // changing the value that was stored in 'b' pointer (using pointer to change value)

        printf("%d", a);

        return 0;
    }
}