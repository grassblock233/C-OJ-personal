#include <stdio.h>
int main()
{
    int jiao[20][20];
    int n,a,b,x,y;
    int i = 0;
    char tmp;
    while (scanf("%d",&n)!=EOF)
    {
        for (x = 0;x<20;x++)
        {
            for (y = 0;y<20;y++)
            {
                jiao[x][y] = 0;
            }
        }
        for (i = 0; i<n; i++)
        {
            jiao[i][0] = 1;
            jiao[i][i] = 1;
        }
        for (a = 2; a<n ;a++)
        {
            for (b = 1; b<a ;b++)
            {
                jiao[a][b]=jiao[a-1][b-1]+jiao[a-1][b];
            }
        }
        for (x = 0;x<n;x++)
        {
            for (y = 0;y<n;y++)
            {
                if (jiao[x][y]>=1)
                {
                    printf("%d",jiao[x][y]);
                    if (jiao[x][y+1]>=1)
                    {
                        printf(" ");
                    }
                }
            }
            printf("\n");
        }
    }
    return 0;
}