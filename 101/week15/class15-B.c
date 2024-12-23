#include <stdio.h>
#include <stdlib.h>

int abs(int n)
{
    if (n >= 0)
    {
        return n;
    }
    else
    {
        return -n;
    }
}

void sort(int *array, int cnt)
{
    int swap;
    for (int i = cnt - 1; i >= 0; i--)
    {
        for (int k = 1; k <= i; k++)
        {
            if (abs(array[k]) > abs(array[k - 1]))
            {
                swap = array[k];
                array[k] = array[k - 1];
                array[k - 1] = swap;
            }
        }
    }
}

int main()
{
    for (;;)
    {
        int *ans;
        int cnt;
        scanf("%d", &cnt);
        if (cnt == 0)
        {
            break;
        }
        ans = malloc(sizeof(int) * (cnt + 10));
        if (ans == NULL)
        {
            return -1;
        }
        for (int i = 0; i < cnt; i++)
        {
            scanf("%d", &ans[i]);
        }
        sort(ans, cnt);
        for (int i = 0; i < cnt; i++)
        {
            if (i == cnt - 1)
            {
                printf("%d\n", ans[i]);
            }
            else
            {
                printf("%d ", ans[i]);
            }
        }
        free(ans);
    }
    return 0;
}