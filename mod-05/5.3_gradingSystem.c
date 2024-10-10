// 90++ >>> A+ and scholarship
// 80 to 89 >>> only A+
// 33 to 100 >>> Pass
// 0 to 32 >>> fail  


#include <stdio.h>
int main()
{

    int marks;
    scanf("%d", &marks);

    if (marks >= 33 && marks <= 100)
    {
        printf("You have passed\n");            // with pass

        if (marks >= 80 && marks <= 100)
        {
            printf("You got A+\n");
            
            if (marks >= 90)
            {
                printf("You Got Scholarship!!!\n");         // with scholarship;
            }
        }

        else if (marks >= 70 && marks <= 79)
        {
            printf("You got A-\n");
        }
        else if (marks >= 60 && marks <= 69)
        {
            printf("You got A\n");
        }
        else if (marks >= 50 && marks <= 59)
        {
            printf("You got B\n");
        }
        else if (marks >= 40 && marks <= 49)
        {
            printf("You got C\n");
        }
        else if (marks >= 33 && marks <= 39)
        {
            printf("You got D\n");
        }
    }

    else if (marks >= 0 && marks <= 32)
    {
        printf("You got F\n");
        printf("You have failed\n");        // with fail
    }
    else
        printf("Invalid mark");

    return 0;
}