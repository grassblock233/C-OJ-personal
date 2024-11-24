#include <stdio.h>
int judge(char str)
{
    int flag;
    if ((str >= 'a' && str <= 'z') || (str >= 'A' && str <= 'Z') || (str >= '0' && str <= '9'))
    {
        flag = 1;
    }
    else
    {
        flag = 0;
    }
    return flag;
}

int main()
{
    int a = 0; /*control '\n'*/
    int flag;
    char str;
    for (;;)
    {
        str = getchar();
        flag = judge(str);
        if (str == EOF)
        {
            break;
        }
        if (flag == 1)
        {
            printf("%c", str);
            a = 0;
        }
        else
        {
            if (a == 0)
            {
                printf("\n");
                a = 1;
            }
        }
    }
    return 0;
}