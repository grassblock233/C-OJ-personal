#include <stdio.h>
int main()
{
    int horse_total_number;
    int horse_speed_1[1000], horse_speed_2[1000];
    int sort_count;
    int i, temp, flag;
    int win_count, lost_count;
    int horse_number_1, horse_number_2;
    while (scanf("%d", &horse_total_number) != EOF)
    {
        win_count = 0;
        lost_count = 0;
        if (horse_total_number == 0)
        {
            return 0;
        }
        /*输入*/
        for (i = 0; i < horse_total_number; i++)
        {
            scanf("%d", &horse_speed_1[i]);
        }
        for (i = 0; i < horse_total_number; i++)
        {
            scanf("%d", &horse_speed_2[i]);
        }
        /*冒泡排序*/
        for (sort_count = horse_total_number; sort_count > 0; sort_count--)
        {
            for (i = 1; i < sort_count; i++)
            {
                if (horse_speed_1[i - 1] > horse_speed_1[i])
                {
                    temp = horse_speed_1[i - 1];
                    horse_speed_1[i - 1] = horse_speed_1[i];
                    horse_speed_1[i] = temp;
                }
            }
        }
        for (sort_count = horse_total_number; sort_count > 0; sort_count--)
        {
            for (i = 1; i < sort_count; i++)
            {
                if (horse_speed_2[i - 1] > horse_speed_2[i])
                {
                    temp = horse_speed_2[i - 1];
                    horse_speed_2[i - 1] = horse_speed_2[i];
                    horse_speed_2[i] = temp;
                }
            }
        }
        /*贪心算法*/
        for (horse_number_2 = 0; horse_number_2 < horse_total_number; horse_number_2++)
        {
            flag = 0;
            for (horse_number_1 = 0; horse_number_1 < horse_total_number; horse_number_1++)
            {
                if (horse_speed_1[horse_number_1] > horse_speed_2[horse_number_2])
                {
                    horse_speed_1[horse_number_1] = 0;
                    win_count++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                lost_count++;
            }
        }
        /*判断输赢*/
        if (win_count > lost_count)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}