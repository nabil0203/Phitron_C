/*

breaks the loop and goes out of the loop
doesn't execute any statement after getting break

 */

#include <stdio.h>
int main()
{

    for (int i = 1; i <= 8; i++)
    {
        if (i == 5)
        {
            break;                      // breaks the whole loop when if got 5
        }
        printf("%d\n", i);
    }

    printf("after break");

    return 0;
}