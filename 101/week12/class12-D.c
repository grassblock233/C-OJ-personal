#include <stdio.h>
#include <stdlib.h>

struct Number
{
    _Bool *isexit;
};

typedef struct Number *numberlist;

_Bool init(numberlist list, int n)
{
    list->isexit = malloc(sizeof(_Bool) * n);
    if (list->isexit == NULL)
        return -1;
    for (int i = 0; i < n; i++)
    {
        list->isexit[i] = 1;
    }
    return 0;
}

int left(numberlist list, int n)
{
    int total = n;
    int p = 0;
    int count = 0; /*1,2,3,4*/
    for (;; p++)
    {
        if (n == 1)
            break;
        if (p == total)
            p = 0;
        if (list->isexit[p] == 1)
        {
            count++;
        }
        else
        {
            continue;
        }
        if (count == 4)
        {
            list->isexit[p] = 0;
            count = 0;
            n--;
        }
    }
    for (int i = 0; i < total; i++)
    {
        if (list->isexit[i] == 1)
        {
            return i + 1;
        }
    }
}

int main()
{
    int n;
    struct Number number;
    while (scanf("%d", &n) != EOF)
    {
        if (init(&number, n) == -1)
            break;
        printf("%d\n", left(&number, n));
        free(number.isexit);
    }
    return 0;
}
