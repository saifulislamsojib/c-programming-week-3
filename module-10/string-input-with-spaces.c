#include <stdio.h>
#include <string.h>

int main()
{
    char str[15];
    // gets(str);
    fgets(str, 15, stdin);
    int len = strlen(str);
    str[len - 1] = '\0';
    printf("%s", str);
    return 0;
}