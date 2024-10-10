#include <stdio.h>
int main()
{

    int count1 = 0, count2 = 0, count3 = 0;

    for (int i = 1; i <= 3; i++)
    {
        count1++;                        // counting every time the loop runs 

        for (int j = 1; j <= 5; j++)
        {
            count2++;                   // counting every time the loop runs 
            
            for (int k = 1; k <= 2; k++)
            {
                count3++;               // counting every time the loop runs 
            }
        }
    }
    
    printf("Outer loop runs %d times\n", count1);
    printf("Middle loop runs %d times\n", count2);
    printf("Inner loop runs %d times\n", count3);

    return 0;
}