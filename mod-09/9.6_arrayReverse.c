#include <stdio.h>
int main()
{

    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    for (int i = n-1; i >= 0; i--)
    {
        printf("%d ", a[i]);
    }


    return 0;
}

// here reverse doesn't inplements; we just printed reversely
// check https://github.com/nabil0203/Phitron_Cpp/blob/main/week01-practice-01/F_Reversing.cpp
