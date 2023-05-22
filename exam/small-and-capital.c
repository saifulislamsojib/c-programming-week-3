#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    scanf("%s", str);
    int c = 0, s = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            s++;
        }
        else
        {
            c++;
        }
    }
    printf("%d %d", c, s);

    return 0;
}