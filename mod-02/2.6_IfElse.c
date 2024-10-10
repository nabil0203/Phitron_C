#include <stdio.h>
int main()
{

    int a = 5;

    if (a < 10)     // change the condition
    {
        a++;
        printf("%d\n",a);
    }

    printf("Outside If\n");
    printf("%d",a);

    return 0;
}