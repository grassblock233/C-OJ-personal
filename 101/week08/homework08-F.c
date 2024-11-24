#include <stdio.h>
#include <string.h>

int main()
{
    char number[200];
    char IntNumber[100];
    char FloatNumber[4];
    int in[100], fn[4];
    int flag;
    int i, n;
    int len;
    while (scanf("%s", number) != EOF)
    {
        len = strlen(number);
        flag = 0;
        /*input part*/
        for (i = 0;; i++)
        {
            if (number[i] == '.')
            {
                i++;
                break;
            }
            else
            {
                IntNumber[i] = number[i];
            }
        }
        for (n = 0; i < len; i++, n++)
        {
            FloatNumber[n] = number[i];
        }
        /*transform part-float*/
        len = strlen(IntNumber);
        for (i = 0; i < 4; i++)
        {
            fn[i] = FloatNumber[i] - '0';
        }
        for (i = len - 1; i >= 0; i--)
        {
            in[i] = IntNumber[i] - '0';
        }
        /*cu-part-float*/
        if (fn[3] >= 4)
        {
            flag = 1;
        }
        for (i = 2; i >= 0; i--)
        {
            if (flag == 1)
            {
                fn[i]++;
                flag = 0;
            }
            if (fn[i] >= 7)
            {
                fn[i] = 0;
                flag = 1;
            }
        }
        /*cu-part-int*/
        for (i = len - 1; i >= 0; i--)
        {
            if (flag == 1)
            {
                in[i]++;
                flag = 0;
            }
            if (in[i] >= 7)
            {
                in[i] = 0;
                flag = 1;
            }
        }
        if (flag == 1)
        {
            printf("1");
        }
        /*output part*/
        for (i = 0; i < len; i++)
        {
            printf("%d", in[i]);
        }
        printf(".");
        for (i = 0; i < 3; i++)
        {
            printf("%d", fn[i]);
        }
        printf("\n");
    }
    return 0;
}