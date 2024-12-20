#include <stdio.h>
#include <stdlib.h>

int findloc(int a, int totalcount, int *mode)
{
    int loc = -1;
    for (int i = 0; i < totalcount; i++)
    {
        if (mode[i] == a)
        {
            loc = i;
        }
    }
    return loc;
}

void sort(int totalcount, int *mode, int *modecount)
{
    int swap;
    for (int i = totalcount - 1; i >= 0; i--)
    {
        for (int k = 1; k < i; k++)
        {
            if (modecount[k] > modecount[k - 1])
            {
                swap = modecount[k];
                modecount[k] = modecount[k - 1];
                modecount[k - 1] = swap;
                swap = mode[k];
                mode[k] = mode[k - 1];
                mode[k - 1] = swap;
            }
        }
    }
}

int main()
{
    int p;
    int t;
    int n;
    int loc;
    int maxcount;
    int totalcount;
    int *ansmode;
    int *mode;
    int *modecount;
    int *a;
    int *used;

    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        /*init*/
        totalcount = 0;
        p = 0;

        /*input*/
        scanf("%d", &n);
        a = malloc(sizeof(int) * n + sizeof(int) * 10);
        for (int k = 0; k < n; k++)
        {
            scanf("%d", &a[k]);
        }

        /*init array*/
        used = malloc(sizeof(int) * n + sizeof(int) * 10);
        for (int k = 0; k < n + 10; k++)
        {
            used[k] = 0;
        }
        ansmode = malloc(sizeof(int) * n + sizeof(int) * 10);
        mode = malloc(sizeof(int) * n + sizeof(int) * 10);
        modecount = malloc(sizeof(int) * n + sizeof(int) * 10);

        /*find mode in a*/
        for (int k = 0; k < n; k++)
        {
            loc = findloc(a[k], totalcount, mode);
            if (loc == -1)
            {
                mode[totalcount] = a[k];
                modecount[totalcount]++;
                totalcount++;
            }
            else
            {
                modecount[loc]++;
            }
        }

        sort(totalcount, mode, modecount);

        maxcount = modecount[0];
        for (int k = 0; k < totalcount; k++)
        {
            if (modecount[k] == maxcount)
            {
                ansmode[p] = mode[k];
                p++;
            }
            else
            {
                break;
            }
        }

        /*output*/
        for (int k = 0; k < p; k++)
        {
            printf("%d ", ansmode[k]);
            if (ansmode[k] >= 1 && ansmode[k] <= n)
            {
                used[ansmode[k]] = 1;
            }
        }
        for (int k = p; k < n; k++)
        {
            for (int j = 1; j <= n; j++)
            {
                if (used[j] == 0)
                {
                    printf("%d ", j);
                    used[j] = 1;
                    break;
                }
            }
        }
        printf("\n");

        free(used);
        free(ansmode);
        free(mode);
        free(modecount);
    }
}
