/*

* 
* * 
* * * 

*/


#include <stdio.h>
int main()
{

    for (int i = 1; i <= 7; i++)            //row
    {
        for (int j = 1; j <= i; j++)            //col
        {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
