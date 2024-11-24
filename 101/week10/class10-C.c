#include <stdio.h>
double dp[2][3];

double pos(int j, int i)
{
    if (j == 2)
    {
        return dp[j][i];
    }
    else if (j > 2)
    {
        return 1.0 / 2 * pos(j - 1, i) + 1.0 / 2 * pos(j - 1, i - 1);
    }
}

int main()
{
    int loc;
    int find;
    int score[1000];
    int i, j;    /*loop*/
    int n;       /*count*/
    double poss; /*possibility*/
    dp[2][0] = 0;
    dp[2][1] = 1.0 / 2;
    dp[2][2] = 1.0 / 2;
    dp[2][3] = 0;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n + 1; i++)
        {
            scanf("%d", &score[i]);
        }
        scanf("%d", &find);
        for (i = 0; i < n + 1; i++)
        {
            if (find == score[i])
            {
                loc = i;
                break;
            }
        }
        poss = pos(n + 1, loc + 1);
        printf("%.6lf\n", poss);
    }
}
