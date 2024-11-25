#include <stdio.h>
#include <stdlib.h>
struct repeat
{
    int *ans;
    int *count;
    int size;
};

typedef struct repeat *Repeat;

void init()
{
    Repeat p;
    p->ans = malloc(sizeof(int) * 20);
    p->count = malloc(sizeof(int) * 20);
    if (p->ans == NULL)
    {
        return;
    }
    if (p->count == NULL)
    {
        return;
    }
    p->count = 0;
    p->size = 0;
}

_Bool find(int index)
{
    int i;
    Repeat p;
    _Bool flag = 0;
    for (i = 0; i < p->size; i++)
    {
        if (index == p->ans[i])
        {
            flag = 1;
        }
    }
    
}

void Num(int *a)
{
    Repeat p;
    int i;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", (a + i));
    }
    for (i = 0; i < 10; i++)
    {

    }
}

int main()
{
    struct repeat RE;
    int *a = malloc(sizeof(int) * 20);
    if (a == NULL)
    {
        return -1;
    }
    init(&RE);
    Num(a);
}