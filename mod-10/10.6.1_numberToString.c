// take input as number
// print output as a string

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int num = 0;
    while (n != 0)
    {
        int rem = n % 10;
        num = num * 10 + rem;
        n = n / 10;
    }
    printf("%d", num);

    char x[n];
}
