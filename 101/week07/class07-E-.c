#include <stdio.h>
#include <string.h>
int main()
{
    char file[1005][20];
    char file_attention[1005][20];
    char file_virus[1005][20];
    char swap[20];
    int count_att, count_loc, count_vir;
    int locate[1005];
    int n;    /*count of files*/
    int i, a; /*loop*/
    int length;
    while (scanf("%d", &n) != EOF)
    {
        getchar();
        count_att = 0;
        count_loc = 0;
        count_vir = 0;
        if (n == 0)
        {
            return 0;
        }
        /*input part*/
        for (i = 0; i < n; i++)
        {
            gets(file[i]);
        }
        /*find .exe*/
        for (i = 0; i < n; i++)
        {
            length = strlen(file[i]);
            if (strstr(file[i], ".exe") != NULL)
            {
                if (length >= 4)
                {
                    for (a = 0; a < length - 4; a++)
                    {
                        file_attention[count_att][a] = file[i][a];
                    }
                    locate[count_loc] = i;
                    count_att++;
                    count_loc++;
                }
            }
        }
        /*comfirm virus*/
        for (i = 0; i < count_att; i++)
        {
            for (a = 0; a < n; a++)
            {
                if (a == locate[i])
                {
                    continue;
                }
                else
                {
                    if (strcmp(file_attention[i], file[a]) == 0)
                    {
                        strcpy(file_virus[count_vir], file[locate[i]]);
                        count_vir++;
                        break;
                    }
                }
            }
        }
        /*order*/
        for (i = count_vir - 1; i > 0; i--)
        {
            for (a = 1; a <= i; a++)
            {
                if (strcmp(file_virus[a], file_virus[a - 1]) < 0)
                {
                    strcpy(swap, file_virus[a - 1]);
                    strcpy(file_virus[a - 1], file_virus[a]);
                    strcpy(file_virus[a], swap);
                }
            }
        }
        /*output part*/
        for (i = 0; i < count_vir; i++)
        {
            puts(file_virus[i]);
        }
    }
    return 0;
}