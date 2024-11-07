// https://codeforces.com/group/MWSDmqGsZm/contest/223339/problem/K

#include <stdio.h>

void maxNum(int a[], int n){

    
    int max = a[0];
     
    if (max<a[i])
    {
        /* code */
    }
    
    maxNum(a[], n);


}


int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    maxNum(a,n);

    return 0;
}