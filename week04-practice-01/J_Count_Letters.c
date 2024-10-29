// https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/J

// code runs in custom invocation of cf

// #include <stdio.h>
// #include <string.h>
// char s[10000001];

// int main()
// {

//     scanf("%s", s);

//     int f[26] = {0};

//     for (int i = 0; i < strlen(s); i++)
//     {
//         f[s[i]] = f[s[i]] + 1;
//     }

//     for (int i = 97; i <= 122; i++)
//     {
//         if (f[i] > 0)
//         {
//             printf("%c : %d\n", i, f[i]);
//         }
//     }

//     return 0;
// }

// help
#include <stdio.h>
#include <string.h>
char str[10000001]; // array main function er mdde raka jabena. cause main function er mdde 10^6 porjnto declear kora jai. evave try krle accept hbe

int main()
{
    int f[26] = {0};
    scanf("%[^\n]s", str);

    int len = strlen(str);
    // printf("%d\n", len);
    for (int i = 0; i < len; i++)
    {
        f[str[i] - 'a']++;
    }

    for (int i = 0; i < 26; i++)
    {
        if (f[i] != 0)
        {
            printf("%c : %d\n", i + 'a', f[i]);
        }
    }

    return 0;
}