#include <stdio.h>

int main()
{
    int n;
    int k = 1;
    int ans = 0;
    int count = 0;
    int a[10];
    for (int i = 0; i < 10; i++)
    {
        a[i] = 0;
    }
    for (int i = 0;; i++)
    {
        scanf("%d", &n);
        if (n == 0)
        {
            break;
        }
        a[n - 1] = 1;
        count++;
    }
    for (int i = 0; i < 6; i++)
    {
        ans += a[i] * k;
        k *= 2;
    }
    printf("%d", ans);
}