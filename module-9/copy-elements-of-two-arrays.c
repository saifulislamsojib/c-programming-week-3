#include <stdio.h>

int main()
{
    int n, m;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &m);
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }
    int result[n + m];
    for (int i = 0; i < n; i++)
    {
        result[i] = arr[i];
    }
    for (int i = n; i < (n + m); i++)
    {
        result[i] = arr2[i - n];
    }
    for (int i = 0; i < (n + m); i++)
    {
        printf("%d ", result[i]);
    }
    return 0;
}