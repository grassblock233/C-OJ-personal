#include <stdio.h>
int x[3];

int find(int s, int a, int b, int c)
{
    int d;
    int e;
    int f;
    int i;
    int flag = 0;
    for (d = 2; d <= s; d++)
    {
        if (d <= a)
        {
            continue;
        }

        for (e = 3; e <= s; e++)
        {
            if (e <= d)
            {
                continue;
            }

            for (f = 4; f <= s; f++)
            {
                if (f <= e)
                {
                    continue;
                }
                if (d + e + f == s)
                {
                    if (d * d + e * e + f * f == a * a + b * b + c * c)
                    {
                        x[0] = d;
                        x[1] = e;
                        x[2] = f;
                        flag = 1;
                        return 1;
                    }
                }
            }
        }
    }
    if (flag == 0)
    {
        return 0;
    }
}
int main()
{
    int a;
    int b;
    int c;
    int s;
    int flag;

    scanf("%d", &s);
    for (a = 1; a <= s; a++)
    {
        for (b = 2; b <= s; b++)
        {
            if (b <= a)
            {
                continue;
            }
            for (c = 3; c <= s; c++)
            {
                if (c <= b)
                {
                    continue;
                }
                if (a + b + c == s)
                {
                    flag = find(s, a, b, c);
                    if (flag == 1)
                    {
                        printf("(%d,%d,%d):(%d,%d,%d)\n", a, b, c, x[0], x[1], x[2]);
                    }
                }
            }
        }
    }
    return 0;
}