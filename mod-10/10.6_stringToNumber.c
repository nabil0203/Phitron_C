// take input as string
// print output as a number

#include <stdio.h>
int main()

{   // this is for single digit numbers
    // char s[5] = "0";
    // printf("%d", s[0]-'0');




    // this is for single + multiple digit numbers

    int n;
    scanf("%d", &n);                    // how many digits

    char x[n];
    scanf("%s", x);                      // taking string input

    int num = 0;
    for (int i = 0; i < n; i++)
    {

        int digit = x[i] - '0';                     // getting digit one by one

        num = num * 10 + digit;                     // calculating as int
    }
    printf("%d", num);

    return 0;
}