#include <stdio.h>
int main()
{
    int count, time, time_left;
    int i, n, tmp_int;
    int homework_time[30], homework_value[30];
    double value_per_time[30];
    double value_total;
    double tmp_double;
    while (scanf("%d %d", &count, &time) != EOF && (count != 0 || time != 0))
    {
        time_left = time;
        value_total = 0;
        for (i = 0; i < count; i++)
        {
            scanf("%d %d", &homework_time[i], &homework_value[i]);
            value_per_time[i] = (double)homework_value[i] / homework_time[i];
        }
        for (n = count; n > 0; n--)
        {
            for (i = 1; i < n; i++)
            {
                if (value_per_time[i] > value_per_time[i - 1])
                {
                    tmp_double = value_per_time[i];
                    value_per_time[i] = value_per_time[i - 1];
                    value_per_time[i - 1] = tmp_double;
                    tmp_int = homework_time[i];
                    homework_time[i] = homework_time[i - 1];
                    homework_time[i - 1] = tmp_int;
                    tmp_int = homework_value[i];
                    homework_value[i] = homework_value[i - 1];
                    homework_value[i - 1] = tmp_int;
                }
            }
        }
        for (i = 0; i < count; i++)
        {
            tmp_int = time_left;
            time_left = time_left - homework_time[i];
            if (time_left >= 0)
            {
                value_total = value_total + (double)homework_value[i];
            }
            else
            {
                value_total = value_total + tmp_int * homework_value[i] / (double)homework_time[i];
                break;
            }
        }
        printf("%.2lf\n", value_total);
    }
    return 0;
}