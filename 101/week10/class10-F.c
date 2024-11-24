#include <stdio.h>
int PathTop = 0;
int k; /*limit output line*/
int ans[10];
int nums[10];
int used[10];

int DpCount(int n)
{
    if (n == 1)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 1;
    }
    else
    {
        return (n - 1) * (DpCount(n - 1) + DpCount(n - 2));
    }
}

int Output(int *ans, int n)
{
    int i; /*loop*/
    if (k < 4)
    {
        for (i = 0; i < n; i++)
        {
            printf("%d", ans[i]);
        }
        printf(" ");
        k++;
    }
    else
    {
        k = 0;
        for (i = 0; i < n; i++)
        {
            printf("%d", ans[i]);
        }
        printf("\n");
    }
}

void BackTrace(int n)
{
    int i;
    if (PathTop == n)
    {
        Output(ans, n);
        return;
    }
    for (i = 0; i < n; i++)
    {
        if (used[i] == 1)
        {
            continue;
        }
        else
        {
            if (i == PathTop)
            {
                continue;
            }
            else
            {
                used[i] = 1;
                ans[PathTop] = nums[i];
                PathTop++;
                BackTrace(n);
                PathTop--;
                used[i] = 0;
            }
        }
    }
}

int main()
{
    int i; /*loop*/
    int n; /*input*/
    k = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        used[i] = 0;
        nums[i] = i + 1;
    }
    BackTrace(n);
    printf("\n");
    printf("s=%d", DpCount(n));
    return 0;
}