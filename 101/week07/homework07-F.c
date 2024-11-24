#include <stdio.h>
#include <string.h>
int min(int num_a, int num_b)
{
    int num_min;
    if (num_a >= num_b)
    {
        num_min = num_b;
    }
    else
    {
        num_min = num_a;
    }
    return num_min;
}
int find(int num_a, int num_b)
{
    int i;
    int flag;
    flag = 0;
    for (i = 2; i <= min(num_a, num_b); i++)
    {
        if (num_a % i == 0 && num_b % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 0)
    {
        i = 1;
    }
    return i;
}

int main()
{
    int a1, b1;
    int a2, b2;
    int a, b;
    int fc;
    while (scanf("%d/%d * %d/%d", &a1, &b1, &a2, &b2) != EOF)
    {
        a = a1 * a2;
        b = b1 * b2;
        while (find(a, b) != 1)
        {
            fc = find(a, b);
            a = a / fc;
            b = b / fc;
        }
        if (a % b == 0)
        {
            printf("%d/%d * %d/%d = %d\n", a1, b1, a2, b2, a / b);
        }
        else
        {
            printf("%d/%d * %d/%d = %d/%d\n", a1, b1, a2, b2, a, b);
        }
    }
    return 0;
}