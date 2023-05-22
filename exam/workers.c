#include <stdio.h>

int main()
{
    int m1, m2, day;
    scanf("%d %d %d", &m1, &m2, &day);
    int val = (m1 * day) / m2;
    printf("%d", val);
    return 0;
}