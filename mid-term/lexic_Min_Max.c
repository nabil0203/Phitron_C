// https://www.hackerrank.com/contests/mid-term-1729629486/challenges/lexic-min-max

// digit min max concept has been used

#include <stdio.h>
#include <string.h>
int main()
{
    char s1[1001], s2[1001], s3[1001];
    scanf("%s %s %s", s1, s2, s3);

    // min
    if (strcmp(s1, s2) <= 0 && strcmp(s1, s3) <= 0)
    {
        printf("%s\n", s1);
    }
    else if (strcmp(s2, s3) <= 0 && strcmp(s2, s1) <= 0)
    {
        printf("%s\n", s2);
    }
    else
    {
        printf("%s\n", s3);
    }


    //max
    if (strcmp(s1, s2) >= 0 && strcmp(s1, s3) >= 0)
    {
        printf("%s", s1);
    }
    else if (strcmp(s2, s3) >= 0 && strcmp(s2, s1) >= 0)
    {
        printf("%s", s2);
    }
    else
    {
        printf("%s", s3);
    }

    return 0;
}