#include <stdio.h>
#include <string.h>
int main()
{
    char input[2000][17];
    char str_exe[2000][17];
    char cp_str_exe[2000][17];
    int n;
    while (scanf("%d", &n) != EOF)
    {
        int len = 0;
        int cnt_str_exe = 0;
        for (int i = 0; i < n; i++)
        {
            scanf("%s", input[i]);
        }
        int j = 0;
        for (int i = 0; i < n; i++)
        {
            len = strlen(input[i]);
            if (strcmp(&input[i][len - 4], ".exe") == 0)
            {
                strcpy(str_exe[j++], input[i]);
                cnt_str_exe += 1;
            }
        }
        int k = 0;
        for (int i = 0; i < cnt_str_exe; i++)
        {
            len = strlen(str_exe[i]);
            str_exe[i][len - 4] = '\0';
            for (int j = 0; j < n + 1; j++)
                if (strcmp(str_exe[i], input[j]) == 0 && *input[j] != NULL)
                    strcpy(cp_str_exe[k++], str_exe[i]);
        }
        int i = 0;
        j = 0;
        char buf[200];
        for (i = 0; i < k - 1; i++)
        {
            for (j = 0; j <= k - 2 - i; j++)
            {
                if (strcmp(cp_str_exe[j], cp_str_exe[j + 1]) > 0)
                {
                    strcpy(buf, cp_str_exe[j]);
                    strcpy(cp_str_exe[j], cp_str_exe[j + 1]);
                    strcpy(cp_str_exe[j + 1], buf);
                }
            }
        }
        for (int i = 0; i < k; i++)
        {
            printf("%s.exe\n", cp_str_exe[i]);
        }
    }
    return 0;
}