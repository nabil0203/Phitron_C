#include <stdio.h>
#include <stdbool.h>
int main()
{
    // use various operators and get different output
    bool x = ! ((4 > 5) && (5 == 5) && (8 > 2));
    bool y =   ((4 > 5) || (5 == 5) && (8 > 2));

    printf("%d\n%d", x,y);

    return 0;
}