#include <stdio.h>
int main()
{
    int i = 0;
    int eng, num, space_enter, other;
    char judge;
    eng = 0;
    num = 0;
    space_enter = 0;
    other = 0;

    do
    {
        judge = getchar();
        if (judge >= 65 && judge <= 90 || judge >= 97 && judge <= 122)
        {
            eng++;
        }
        else if (judge >= 48 && judge <= 57)
        {
            num++;
        }
        else if (judge == 32 || judge == 10)
        {
            space_enter++;
        }
        else
        {
            if (judge == EOF)
            {
                continue;
            }
            else
            {
                other++;
            }
        }
        i++;
        if (i < 20)
        {
            continue;
        }
        else
        {
            printf("%d个英文字母\n%d个数字字符\n%d个空格或回车\n%d个其他字符\n", eng, num, space_enter, other);
            eng = 0;
            num = 0;
            space_enter = 0;
            other = 0;
            i = 0;
        }
    } while (judge != EOF);

    return 0;
}