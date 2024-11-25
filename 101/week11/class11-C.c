#include <stdio.h>
_Bool IsRepeated(int a, int *repeat, int size)
{
    int i;
    int flag = 0;
    if (size == 0)
    {
        return 0;
    }
    for (i = 0; i <= size; i++)
    {
        if (a == repeat[i])
        {
            flag = 1;
        }
    }
    return flag;
}

int locate(int a, int *repeat, int size)
{
    int i;
    int loc;
    for (i = 0; i <= size; i++)
    {
        if (a == repeat[i])
        {
            loc = i;
        }
    }
    return loc;
}

int max_count(int *count,int size)
{
    int max = count[0];
    int i;
    int loc = 0;
    for (i = 1;i <= size;i++)
    {
        if (count[i] > max)
        {
            loc = i;
            max = count[i];
        }
    }
    return loc;
}

int Num(int a[])
{
    int i ,k;
    int repeat[20];
    int count[20];
    int size = 0;

    for (i = 0; i < 10; i++)
    {
        if (IsRepeated(a[i], repeat, size) == 0)
        {
            count[size] = 1;
            repeat[size] = a[i];
            size++;
        }
        else
        {
            count[locate(a[i], repeat, size)]++;
        }
    }
    printf("%d\n",repeat[max_count(count,size)]);
    printf("%d\n",count[max_count(count,size)]);
}

int main()
{
    int a[20];
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &a[i]);
    }
    Num(a);
    return 0;
}