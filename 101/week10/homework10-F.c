#include <stdio.h>
#include <string.h>

void Sort(char *str1, int len, char *str2)
{
    int i, n;
    char swap;
    /*copy*/
    strcpy(str2, str1);
    /*sort*/
    for (i = len - 1; i > 0; i--)
    {
        for (n = 1; n <= i; n++)
        {
            if (str2[n] < str2[n - 1])
            {
                swap = str2[n];
                str2[n] = str2[n - 1];
                str2[n - 1] = swap;
            }
        }
    }
}

int main()
{
    /*init*/
    int p = 0; /*write WordDic[] & WordStr[]*/
    int WordCountDic = 0;
    int AnsCount;
    int StrCount = 0;
    _Bool FlagDic = 0;
    _Bool FlagAns; /*Ans[] is repeated*/
    char Dic[5000];
    char Str[1000][10];
    char WordDic[1000][10];
    char Del[10];
    char WordCmpDic[1000][10];
    char WordCmpStr[10];
    char Ans[1000][10];
    char AnsSwap[10];

    /*input Dic*/
    gets(Dic);
    /*trans into words*/
    for (int i = 0;; i++)
    {
        if (Dic[i] == '\0')
        {
            break;
        }
        if (Dic[i] >= 'a' && Dic[i] <= 'z')
        {
            WordDic[WordCountDic][p] = Dic[i];
            p++;
            FlagDic = 0;
        }
        else if (FlagDic == 0)
        {
            FlagDic = 1;
            WordCountDic++;
            p = 0;
        }
    }
    /*Sort WordDic*/
    for (int i = 0; i <= WordCountDic; i++)
    {
        Sort(WordDic[i], strlen(WordDic[i]), WordCmpDic[i]);
    }

    /*delete '******'*/
    scanf("%s", Del);
    /*user input*/
    while (scanf("%s", Str[StrCount]) != EOF)
    {
        /*init*/
        AnsCount = 0;
        for (int i = 0; i < 1000; i++)
        {
            for (int n = 0; n < 10; n++)
            {
                Ans[i][n] = '\0';
            }
        }
        for (int i = 0; i < 10; i++)
        {
            WordCmpStr[i] = '\0';
        }

        /*sort*/
        Sort(Str[StrCount], strlen(Str[StrCount]), WordCmpStr);
        /*find in dic*/
        for (int i = 0; i <= WordCountDic; i++)
        {
            if (strcmp(WordCmpStr, WordCmpDic[i]) == 0)
            {
                FlagAns = 0;
                /*delete repeated word*/
                for (int n = 0; n < AnsCount; n++)
                {
                    if (strcmp(Ans[n], WordDic[i]) == 0)
                    {
                        FlagAns = 1;
                    }
                }
                if (FlagAns == 0)
                {
                    strcpy(Ans[AnsCount], WordDic[i]);
                    AnsCount++;
                }
            }
        }
        /*output*/
        if (AnsCount == 0)
        {
            printf(":(\n");
        }
        else
        {
            for (int i = AnsCount - 1; i > 0; i--)
            {
                for (int n = 1; n <= i; n++)
                {
                    for (int k = 0; k < 10; k++)
                    {
                        AnsSwap[i] = '\0';
                    }
                    if (strcmp(Ans[n], Ans[n - 1]) < 0)
                    {
                        strcpy(AnsSwap, Ans[n]);
                        strcpy(Ans[n], Ans[n - 1]);
                        strcpy(Ans[n - 1], AnsSwap);
                    }
                }
            }
            for (int i = 0; i < AnsCount; i++)
            {
                for (int n = 0;n < strlen(Ans[i]);n++)
                {
                    printf("%c",Ans[i][n]);
                }
                if (i < AnsCount - 1)
                {
                    printf(" ");
                }
            }
            printf("\n");
            StrCount++;
        }
    }
}
