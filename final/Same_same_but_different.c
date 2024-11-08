// https://www.hackerrank.com/contests/b6-final-c/challenges/same-same-but-different-1-1

#include <stdio.h>
#include <string.h>
int main()
{

    char s1[100], s2[100], s3[100];

    scanf("%s", s1);
    scanf("%s", s2);
    scanf("%s", s3);

    int count = 0;
    int str_length = strlen(s1);

    for (int i = 0; i < str_length; i++)
    {
        if (s1[i] != s2[i])                 // comparing 1st char of s1,s2
        {
            count++;
        }
        if (s1[i] != s3[i])                 // comparing 1st char of s1,s3
        {
            count++;
        }
    }

    printf("%d", count);

    return 0;
}