// https://www.hackerrank.com/contests/practice-contest-a-introduction-to-c-programming-a-batch-6/challenges/shopping-13

#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    if (n > 1000)
    {
        printf("I will buy Punjabi\n");
        n = n - 1000;

        if (n >= 500)
        {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
        }
    }
    else
        printf("Bad luck!");

    return 0;
}