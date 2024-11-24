#include <stdio.h>
int main()
{
    int n, i;
    float min, max, out;
    float judge[50];
    while (scanf("%d", &n) != EOF)
    {
        out = 0;
        for (i = 0; i < 50; i++)
        {
            judge[i] = 0;
        }
        for (i = 0; i < n; i++)
        {
            scanf("%f", &judge[i]);
        }
        max = judge[0];
        min = judge[0];
        for (i = 0; i < n; i++)
        {
            if (judge[i] >= max)
            {
                max = judge[i];
            }
            if (judge[i] <= min)
            {
                min = judge[i];
            }
        }
        for (i = 0; i < n; i++)
        {
            if (max - min != 0)
            {
                out = (judge[i] - min) / (max - min);
                if (i + 1 != n)
                {
                    printf("%.3f ", out);
                }
                else
                {
                    printf("%.3f\n", out);
                }
            }
        }
    }
    return 0;
}