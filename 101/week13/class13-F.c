#include <stdio.h>
#include <math.h>

int PathTop = 0;
int ans[20];
int nums[20];
_Bool used[20];

void init(_Bool *array)
{
    for (int i = 0; i < 20; i++)
    {
        array[i] = 0;
    }
}

_Bool IsPrime(int n)
{
    _Bool flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 0;
        }
    }
    return flag;
}

void Printans(int k)
{
    if (IsPrime(ans[k - 1] + ans[0]) == 1)
    {
        for (int i = 0; i < k; i++)
        {
            if (i == k - 1)
            {
                printf("%d", ans[i]);
            }
            else
            {
                printf("%d ", ans[i]);
            }
        }
        printf("\n");
    }
}

void BackTrace(int k)
{
    _Bool flag = 0;
    if (PathTop == k - 1)
    {
        Printans(k);
        return;
    }
    for (int i = 1; i < k; i++)
    {
        if (used[i] == 1)
        {
            continue;
        }
        else
        {
            if (IsPrime(ans[PathTop] + nums[i]) == 1)
            {
                flag = 1;
                ans[PathTop + 1] = nums[i];
                PathTop++;
                used[i] = 1;
                BackTrace(k);
                PathTop--;
                used[i] = 0;
            }
        }
    }
}

int main()
{
    int k;
    scanf("%d", &k);
    init(used);
    for (int i = 0; i < k; i++)
    {
        nums[i] = i + 1;
    }
    ans[0] = 1;
    used[0] = 1;
    BackTrace(k);
    return 0;
}