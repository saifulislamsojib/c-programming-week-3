#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr[n];
    int cnt[7] = {0};
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        int k = arr[i];
        cnt[k]++;
    }
    for (int i = 0; i < 7; i++)
    {
        printf("%d - %d\n", i, cnt[i]);
    }
    return 0;
}