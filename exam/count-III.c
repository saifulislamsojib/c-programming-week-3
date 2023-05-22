#include <stdio.h>
#include <string.h>

int main()
{
    char str[1001];
    scanf("%s", str);
    int ctn[26] = {0};
    for (int i = 0; i < strlen(str); i++)
    {
        int val = str[i] - 'a';
        ctn[val]++;
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', ctn[i]);
    }
    return 0;
}