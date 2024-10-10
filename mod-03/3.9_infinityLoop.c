#include<stdio.h>
int main(){

    // no counter update = infinity loop
    // for (int i = 0; i < 10; )
    // {
    //     printf("Hello");
    // }



    // no counter update = infinity loop
    // int j=1;
    // while (j<5)
    // {
    //     printf("Hi");
    // }


    // while loop condition 1 = infinity loop
    int z=0;
    while (1)
    {
        printf("Hi");
        z++;
    }
    

    return 0;
}