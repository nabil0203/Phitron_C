#include <stdio.h>
int main()
{

    int N, rem, temp = 0, reversed = 0;
    scanf("%d", &N);

    temp = N;

    while (temp != 0)
    {
        rem = temp % 10;
        reversed = (reversed * 10) + rem; // formula to store the remainders as a whole number
        temp = temp / 10;
    }
    printf("%d", reversed);
    if (N == reversed)
    {
        printf("\nYES");
    }
    else
        printf("\nNO");

    return 0;
}