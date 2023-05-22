#include <stdio.h>

int main()
{
    char c;
    int ctn[26] = {0};
    while (scanf("%c", &c) != EOF)
    {
        int val = c - 'a';
        ctn[val]++;
    }
    for (char i = 'a'; i <= 'z'; i++)
    {
        if (ctn[i - 'a'] != 0)
        {
            printf("%c : %d\n", i, ctn[i - 'a']);
        }
    }

    return 0;
}