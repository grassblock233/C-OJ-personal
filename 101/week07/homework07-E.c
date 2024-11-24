#include <stdio.h>
#include <string.h>
int main()
{
    int count;
    int flag;
    int m, n;
    int i, a, b; /*loop*/
    char str[2][1000];
    char name[2][60][50];
    while (scanf("%d %d ", &m, &n) != EOF)
    {
        for (i = 0; i < 2; i++)
        {
            for (a = 0; a < 1000; a++)
            {
                str[i][a] = '\0';
            }
        }
        for (i = 0; i < 2; i++)
        {
            for (a = 0; a < 60; a++)
            {
                for (b = 0; b < 50; b++)
                {
                    name[i][a][b] = '\0';
                }
            }
        }
        for (count = 0; count < m; count++)
        {
            scanf("%s", name[0][count]);
        }
        for (count = 0; count < n; count++)
        {
            scanf("%s", name[1][count]);
        }
        for (i = 0; i < m; i++)
        {
            flag = 0;
            for (a = 0; a < n; a++)
            {
                if (strcmp(name[0][i], name[1][a]) == 0)
                {
                    flag = 1;
                }
            }
            if (flag == 1)
            {
                printf("Yes\n");
            }
            else
            {
                printf("No\n");
            }
        }
    }
}