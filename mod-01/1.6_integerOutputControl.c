#include<stdio.h>
int main(){

    int a, b;
    scanf("%d %d", &a,&b);

    printf("%04d\n",a);     //total 4 digit
    
    printf("%08d\n",b);     //total 8 digit

    return 0;
}