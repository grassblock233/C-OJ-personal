#include <stdio.h>
int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main()
{
    int m, n;
    int i;
    int gcd,lcm;
    scanf("%d %d", &m, &n);
    for (i = max(m, n);; i++)
    {
        if (i % m == 0 && i % n == 0)
        {
            lcm = i;
            break;
        }
    }
    gcd = m*n/lcm;
    printf("%d %d",gcd,lcm);
    return 0;
}