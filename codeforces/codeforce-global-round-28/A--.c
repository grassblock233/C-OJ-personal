#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

void delete(int *nums, int count, unsigned long long int x)
{
    int p;
    for (int k = 0; k < count; k++)
    {
        if (nums[k] == -1)
        {
            p = 0;
            continue;
        }
        if (p == 2)
        {
            nums[k - 1] = -1;
            nums[k - 2] = -1;
            break;
        }
        if (nums[k] == 3)
        {
            p++;
        }
    }
}

int number(int *nums, unsigned long long int x)
{
    int count = 0;
    for (; x > 0;)
    {
        nums[count] = x % 10;
        x = x / 10;
    }
    return count;
}

void init(int *nums)
{
    for (int i = 0; i < 50; i++)
    {
        nums[i] = -1;
    }
}

int main()
{
    _Bool flag;
    int t;
    int count;
    int nums[50];
    unsigned long long int x;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        init(nums);
        flag = 0;
        count = 0;
        scanf("%lld", &x);
        count = number(nums, x);
        for (int k = 0; x >= 0; k++)
        {
            if (x % 33 == 0)
            {
                flag = 1;
            }
            else
            {
                delete(nums, count, x);
                
            }
        }
    }
}