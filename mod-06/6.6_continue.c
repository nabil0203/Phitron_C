/*
    continue will skip the exact next statement and go to the counter update
 */
#include <stdio.h>
int main()
{

    for (int i = 1; i <= 8; i++)
    {
        if (i == 5)
        {
            continue;               // here skips 5
        }
        printf("%d\n", i);
    }

    return 0;
}