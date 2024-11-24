#include <stdio.h>

int upset(int number)
{
    int a, b;
    int count;
    b = 0;
    a = number;
    for (count = 1; a >= 10; count = count * 10)
    {
        a = a / 10;
    }
    a = number;
    for (; a > 0;)
    {
        b = b + a % 10 * count;
        a = a / 10;
        count = count / 10;
    }
    return b;
}

int IsPalindromicNumber(int number)
{
    if (upset(number) == number)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int a, b;
    int i; /*loop*/
    int step;
    int tmp; /*try*/
    int flag;
    scanf("%d %d", &a, &b);
    for (i = a; i <= b; i++)
    {
        tmp = i;
        flag = 0;
        for (step = 0; step <= 15; step++)
        {
            if (IsPalindromicNumber(tmp) == 1)
            {
                printf("%d(%d):%d\n", i, step, tmp);
                flag = 1;
                break;
            }
            else
            {
                tmp = tmp + upset(tmp);
            }
        }
        if (flag == 0)
        {
            printf("%d(?):\n", i);
        }
    }
    return 0;
}