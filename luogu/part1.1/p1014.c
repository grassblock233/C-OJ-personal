#include <stdio.h>
int main()
{
    /*a/b*/
    int n, a, b;
    int len_1, len_2, count;
    int limit_a, limit_b;
    count = 1;
    len_1 = 1;
    len_2 = 3;
    limit_a = 1;
    limit_b = 1;
    scanf("%d", &n);
    for (a = 1, b = 1;;)
    {
        if (count == n)
        {
            printf("%d/%d", a, b);
            return 0;
        }
        count++;
        if (limit_a == len_1)
        {
            limit_a = 1;
            len_1 += 4;
        }
        else
        {
            if (limit_a < len_1 / 2 + 1)
            {
                a++;
                limit_a++;
            }
            else if (limit_a < len_1)
            {
                a--;
                limit_a++;
            }
        }
        if (limit_b == len_2)
        {
            limit_b = 1;
            len_2 += 4;
        }
        else
        {
            if (limit_b < len_2 / 2 + 1)
            {
                b++;
                limit_b++;
            }
            else if (limit_b < len_2)
            {
                b--;
                limit_b++;
            }
        }
    }
}