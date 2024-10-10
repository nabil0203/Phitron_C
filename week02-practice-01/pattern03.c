/*
A
B B
C C C
D D D D
E E E E E
F F F F F F
*/

#include <stdio.h>
int main()
{
    for (int i = 'A'; i <= 'F'; i++)
    {
        for (int j = 'A'; j <= i; j++)
        {
            printf("%c ", i);
        }
        printf("\n");
    }

    return 0;
}