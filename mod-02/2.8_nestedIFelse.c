#include <stdio.h>
#include <stdbool.h>
int main()
{

    int tourDays;
    printf("Enter Tour days: ");
    scanf("%d", &tourDays);

    if (tourDays == 2)
    {
        bool boatAvailable = false;          // change true/false

        if (boatAvailable)
        {
            printf("Going to Tangurhaor");
        }
        else
        {
            printf("Going to Sylhet");
        }
    }

    else if (tourDays == 4)
    {
        bool shipAvailable = false;             // change true/false
        if (shipAvailable)
        {
            printf("Going to Saint martin"); 
        }
        else
        {
            printf("Going to Cox's Bazar");
        }
    }

    else
        printf("Kothao jabo na");

    return 0;
}