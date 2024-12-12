#include <stdio.h>

void strconnect(char *str1, char *str2, char *ans)
{
    int p = 0;
    for (int i = 0;; i++)
    {
        if (str1[i] == '\n')
        {
            break;
        }
        ans[p] = str1[i];
        p++;
    }
    for (int i = 0;; i++)
    {
        if (str2[i] == '\n')
        {
            break;
        }
        ans[p] = str2[i];
        p++;
    }
}

void initans(char *ans)
{
    for (int i = 0; i < 20000; i++)
    {
        ans[i] = '\0';
    }
}

int main()
{
    char str1[10000], str2[10000];
    char ans[20000];
    fgets(str1, 10000, stdin);
    fgets(str2, 10000, stdin);
    strconnect(str1, str2, ans);
    puts(ans);
}