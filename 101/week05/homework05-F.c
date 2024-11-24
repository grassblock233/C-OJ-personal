#include <stdio.h>
int IsPalindromicNumber(int *a, int count)
{
    int flag, i1, i2;
    flag = 1;
    for (i1 = 0, i2 = count - 1; i1 <= count / 2; i1++, i2--)
    {
        if (*(a + i1) != *(a + i2))
        {
            flag = 0;
        }
    }
    return flag;
}

int main()
{
    int n, temp;
    int x;     /*x进制*/
    int count; /*数组元素个数*/
    int number[20];
    int i; /*循环*/
    int flag;
    while (scanf("%d", &n) != EOF)
    {
        for (x = 2; x <= 10; x++)
        {
            for (i = 0, temp = n, count = 1; temp > 0; i++)
            {
                number[i] = temp % x;
                temp = temp / x;
                count++;
            }
            count--;
            flag = IsPalindromicNumber(number, count);
            if (flag == 1)
            {
                printf("Yes\n");
                break;
            }
        }
        if (flag == 0)
        {
            printf("No\n");
        }
    }
    return 0;
}