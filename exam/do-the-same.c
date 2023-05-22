#include <stdio.h>

int main()
{
    int n, t;
    scanf("%d %d", &n, &t);
    for (int j = 0; j < t; j++)
    {
        for (int i = 1; i <= n; i++)
        {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}