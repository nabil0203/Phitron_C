#include <stdio.h>
int main()
{

    int day;
    printf("Enter day: ");
    scanf("%d", &day);

    switch (day)
    {

    case 1:
        printf("Sat\n");
        printf("hahaha");
        break;
    case 2:
        printf("Sun\n");
        break;
    case 3:
        printf("Mon\n");
        break;
    case 4:
        printf("Tue\n");
        break;
    case 5:
        printf("Wed\n");
        break;
    case 6:
        printf("Thu\n");
        break;
    case 7:
        printf("Fri\n");
        break;
    default:
        printf("Wrong day");
    }

    printf("~Out of switch case~");

    return 0;
}