#include <stdio.h>
#include <string.h>

int findword(char *str, char (*word)[50])
{
    int count = 0;
    int p = 0;
    int len = strlen(str);
    //_Bool flag = 0;
    for (int i = 0; i < len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            word[count][p] = str[i];
            p++;
            if (str[i + 1] == '\0')
            {
                count++;
                p = 0;
            }
        }
        else if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
        {
            count++;
            p = 0;
        }
    }
    return count;
}

void search(char *s1, char *s2, char *s3)
{
    int len;
    int loc = -1;
    int maxlen = -1;
    int count1, count2;
    char word_s1[1000][50];
    char word_s2[1000][50];
    count1 = findword(s1, word_s1);
    count2 = findword(s2, word_s2);
    for (int i = 0; i < count1; i++)
    {
        len = strlen(word_s1[i]);
        for (int n = 0; n < count2; n++)
        {
            if (strcmp(word_s1[i], word_s2[n]) == 0)
            {
                if (len > maxlen)
                {
                    loc = i;
                    maxlen = len;
                }
            }
        }
    }
    if (loc != -1)
    {
        strcpy(s3, word_s1[loc]);
        puts(s3);
    }
    else
    {
        printf("No common word!");
    }
}

int main()
{
    char str1[5000], str2[5000], str3[5000];
    while (gets(str1))
    {
        gets(str2);
        search(str1, str2, str3);
    }
}
