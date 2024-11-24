#include <stdio.h>

int move(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else if (n >= 2)
    {
        return move(n - 1) + 1 + move(n - 1);
    }
}

int main()
{
    int n;
    int step;
    while (scanf("%d", &n) != EOF && n != 0)
    {
        step = move(n);
        printf("%d\n", step);
    }
    return 0;
}