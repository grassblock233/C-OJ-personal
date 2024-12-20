#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void init(int *nums, int n)
{
    for (int i = 1; i <= n; i++)
    {
        nums[i - 1] = 0;
    }
}

void output(int *nums, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d ", nums[i]);
    }
}

int main()
{
    int *nums;
    int *max;
    int *min;
    int count_max;
    int count_min;

    int p_max, p_min;
    int t;
    int n, k;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        scanf("%d %d", &n, &k);
        nums = malloc(sizeof(int) * n + sizeof(int) * 10);
        max = malloc(sizeof(int) * n);
        min = malloc(sizeof(int) * n);
        p_max = 0;
        p_min = 0;

        init(nums, n);

        count_min = n / 2;
        count_max = n - count_min;

        for (int m = 0; m < count_max; m++)
        {
            max[m] = n - m;
        }
        for (int m = 0; m < count_min; m++)
        {
            min[m] = m + 1;
        }

        for (int m = 0; m < n; m++)
        {
            if (m % 2 == 0)
            {
                nums[m] = max[p_max];
                p_max++;
            }
            else
            {
                nums[m] = min[p_min];
                p_min++;
            }
        }

        output(nums, n);
        printf("\n");
    }
}