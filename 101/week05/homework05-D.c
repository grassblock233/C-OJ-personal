#include <stdio.h>
int main()
{
    int i, n, m, x, y;
    int player_count, judge_count;
    double sum;
    double exchange;
    double j_score[100];
    double player_score[100];
    int hao[100];
    scanf("%d,%d", &player_count, &judge_count);
    for (i = 0; i < player_count; i++)
    {
        for (n = 0; n < judge_count; n++)
        {
            scanf("%lf", &j_score[n]);
        }
        for (x = judge_count; x > 0; x--)
        {
            for (y = 1; y < x; y++)
            {
                if (j_score[y - 1] > j_score[y])
                {
                    exchange = j_score[y - 1];
                    j_score[y - 1] = j_score[y];
                    j_score[y] = exchange;
                }
            }
        }
        for (m = 1, sum = 0; m < judge_count - 1; m++)
        {
            sum = sum + j_score[m];
        }
        player_score[i] = sum / (double)(judge_count - 2);
        hao[i] = i + 1;
    }
    for (i = player_count; i > 0; i--)
    {
        for (n = 1; n < player_count; n++)
        {
            if (player_score[n - 1] > player_score[n])
            {
                exchange = player_score[n - 1];
                player_score[n - 1] = player_score[n];
                player_score[n] = exchange;
                exchange = hao[n - 1];
                hao[n - 1] = hao[n];
                hao[n] = exchange;
            }
        }
    }
    for (i = 1, n = player_count - 1, m = player_count - 1; i <= player_count; i++, n--, m--)
    {
        printf("第%d名:%d号选手,得分%.2lf\n", i, hao[n], player_score[m]);
    }
    return 0;
}