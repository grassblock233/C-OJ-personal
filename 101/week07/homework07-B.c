#include <stdio.h>
#include <string.h>
char trans(char str)
{
    if (str >= 'A' && str <= 'Z')
    {
        str = str + 32;
        return str;
    }
    else
    {
        return str;
    }
}

int main()
{
    int flag;
    int count, count_w[2], count_cw;
    int i, n, m; /*loop*/
    int loc;
    int len, max_len;
    char str[2][800], word[2][200][100], co_word[200][100];
    while (gets(str[0]))
    {
        gets(str[1]);
        count_cw = 0;
        for (i = 0; i < 200; i++)
        {
            for (n = 0; n < 100; n++)
            {
                co_word[i][n] = '\0';
                word[0][i][n] = '\0';
                word[1][i][n] = '\0';
            }
        }
        for (i = 0; i < 2; i++)
        {
            count_w[i] = 0;
        }
        
        /*words*/
        for (i = 0; i < 2; i++)
        {
            flag = 1;
            count = 0;
            m = 0;
            len = strlen(str[i]);
            for (n = 0; n <= len; n++)
            {
                if (trans(str[i][n]) >= 'a' && trans(str[i][n]) <= 'z')
                {
                    flag = 0;
                    word[i][count][m] = trans(str[i][n]);
                    m++;
                }
                else
                {
                    if (flag == 0)
                    {
                        m = 0;
                        count++;
                        flag = 1;
                    }
                }
                if (n == len)
                {
                    count_w[i] = count;
                }
            }
        }
        /*common words*/
        for (n = 0; n < count_w[0]; n++)
        {
            for (m = 0; m < count_w[1]; m++)
            {
                if (strcmp(word[0][n], word[1][m]) == 0)
                {
                    strcpy(co_word[count_cw], word[0][n]);
                    count_cw++;
                }
            }
        }
        /*max_len words*/
        if (count_cw == 0)
        {
            printf("No common word!\n");
        }
        else
        {
            max_len = strlen(co_word[0]);
            loc = 0;
            for (i = 0; i < count_cw; i++)
            {
                len = strlen(co_word[i]);
                if (max_len < len)
                {
                    max_len = len;
                    loc = i;
                }
            }
            puts(co_word[loc]);
        }
    }
    return 0;
}