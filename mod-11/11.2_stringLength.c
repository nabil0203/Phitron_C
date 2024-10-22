#include <stdio.h>
#include<string.h>

int main()
{

    char X[10] = "abcd?? asd";

    int length = 0;

    for (int i = 0; X[i] != '\0'; i++)          // different type condition; loop will go until the value is not equal to null character(\0)
    {
        length++;
    }

    // we can use strlen instead of this loop technique
    // length = strlen(X);

    printf("%d", length);

    return 0;
}