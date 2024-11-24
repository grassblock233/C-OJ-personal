#include <stdio.h>
int find(int m, int n)
{
    if (n == 0)
    {
        if (m > 0)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
    else if (n > m)
    {
        return 0;
    }
    else
    {
        return find(m, n - 1) + find(m - 1, n);
    }
}
int main()
{
    int m, n;
    scanf("%d,%d", &m, &n);
    printf("%d\n", find(m, n));
    return 0;
}