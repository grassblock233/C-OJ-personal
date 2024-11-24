#include <stdio.h>

int charge(int a)
{
    if (a == 2)
    {
        return 1;
    }
    else if (a == 3)
    {
        return 2;
    }
    else if (a > 3)
    {
        return charge(a - 1) + charge(a - 2);
    }
}

int main()
{
    int m;
    while (scanf("%d", &m) != EOF)
    {
        printf("%d\n", charge(m));
    }
}
