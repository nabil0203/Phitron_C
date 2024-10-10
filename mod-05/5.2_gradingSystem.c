#include <stdio.h>
int main()
{

    int marks;
    scanf("%d", &marks);

    if (marks >= 80 && marks <= 100)
    {
        printf("You got A+");
    }
    else if (marks >= 70 && marks <= 79)
    {
        printf("You got A-");
    }
    else if (marks >= 60 && marks <= 69)
    {
        printf("You got A");
    }
    else if (marks >= 50 && marks <= 59)
    {
        printf("You got B");
    }
    else if (marks >= 40 && marks <= 49)
    {
        printf("You got C");
    }
    else if (marks >= 33 && marks <= 39)
    {
        printf("You got D");
    }
    else if (marks >= 0 && marks <= 32)
    {
        printf("You got F");
    }
    else
        printf("Invalid mark");

    return 0;
}