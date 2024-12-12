#include <stdio.h>
#include <stdlib.h>

struct List
{
    int number;
    struct List *next;
};

typedef struct List *list;

void initList(list node, int n)
{
    node->next = NULL;
    node->number = 1;
}

_Bool insertList(list head, int i)
{
    list node = malloc(sizeof(struct List));
    if (node == NULL)
    {
        return 0;
    }
    head->next = node;
    head->number = i;
    node->next = NULL;
}

int main()
{
    struct List head;
    list startList = &head;
    int n, m;
    int p;
    scanf("%d %d", &n, &m);
    initList(&head, n);
    for (int i = 2; i <= n - 1; i++)
    {
        insertList(&head, i);
    }
    
}