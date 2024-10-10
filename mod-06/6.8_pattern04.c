/*
    1
   12
  123
 1234
12345
*/


#include <stdio.h>
int main()
{

    for (int i = 1; i <= 5; i++)            //row
    {
        for (int k = 1; k <= 5 - i; k++)            //space
        {
            printf(" ");
        }

        for (int j = 1; j <= i; j++)            //col
        {
            printf("%d", j);
        }
        printf("\n");
    }

    return 0;
}
