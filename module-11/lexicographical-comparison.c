#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    scanf("%s %s", a, b);
    int v = strcmp(a, b);
    if (v > 0)
    {
        printf("b is smaller than a");
    }
    else if (v > 0)
    {
        printf("a is smaller than b");
    }
    else
    {
        printf("Equal");
    }

    // int i = 0;
    // while (1)
    // {
    //     if (a[i] == '\0' && b[i] == '\0')
    //     {
    //         printf("Equal");
    //         break;
    //     }
    //     else if (a[i] == '\0')
    //     {
    //         printf("a is smaller than b");
    //         break;
    //     }
    //     else if (b[i] == '\0')
    //     {
    //         printf("b is smaller than a");
    //         break;
    //     }
    //     if (a[i] == b[i])
    //     {
    //         i++;
    //         continue;
    //     }
    //     else if (a[i] < b[i])
    //     {
    //         printf("a is smaller than b");
    //         break;
    //     }
    //     else
    //     {
    //         printf("b is smaller than a");
    //         break;
    //     }
    // }

    return 0;
}