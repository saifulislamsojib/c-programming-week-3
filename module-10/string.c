#include <stdio.h>

int main()
{
    char str[6];

    for (int i = 0; i < 5; i++)
    {
        scanf("%c", &str[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("%c", str[i]);
    }
    int len = sizeof(str) / sizeof(char);
    printf("\n%d", len);
    return 0;
}