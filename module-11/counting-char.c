#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    scanf("%s", str);
    int ctn[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        int c = str[i] - 'a';
        ctn[c]++;
    }
    // for (int i = 0; i < 26; i++)
    // {

    //     if (ctn[i] != 0)
    //     {
    //         printf("%c - %d\n", i + 'a', ctn[i]);
    //     }
    // }
    for (int i = 0; i < strlen(str); i++)
    {
        int val = str[i];
        int count = ctn[val - 'a'];
        if (count != 0)
        {
            printf("%c - %d\n", val, count);
            ctn[val - 'a'] = 0;
        }
    }

    return 0;
}