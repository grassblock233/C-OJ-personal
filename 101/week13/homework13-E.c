#include <stdio.h>

int count;
char ans[256];
int n, L;

int PrintAns(int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%c", ans[i]);
    }
}

_Bool JudgeAns(int len)
{
    _Bool flag;
    for (int i = 1; i <= len / 2; i++)
    {
        flag = 1;
        for (int k = 0; k < i; k++)
        {
            if (ans[len - 1 - k] != ans[len - 1 - i - k])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            break;
        }
    }
    return flag;
}

void Dfs(int len)
{
    if (count > L)
    {
        return;
    }
    else if (count == L)
    {
        PrintAns(len - 1);
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            ans[len - 1] = 'A' + i;
            if (JudgeAns(len) == 0)
            {
                count++;
                Dfs(len + 1);
            }
        }
    }
}

int main()
{
    int len;
    scanf("%d %d", &L, &n);

    /*init*/
    ans[0] = 'A';
    count = 1;
    len = 2;

    Dfs(len);
    return 0;
}
