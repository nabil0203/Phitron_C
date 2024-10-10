// https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/Q

#include <stdio.h>
int main()
{

    int x;
    scanf("%d", &x);

    for (int i = 1; i <= x; i++)                       // how many numbers will be taken to sort
    {
        int n;
        scanf("%d", &n);                                   // what number i want to sort

        if (n==0)
        {
            printf("0");
        }
        

        while (n != 0)
        {
            int rem = n % 10;                               // getting remainders as last digit

            printf("%d ", rem);                             // printing the digit in reverse order

            n = n / 10;                                     // updating the number
        }
        printf("\n");
    }

    return 0;
}