#include <stdio.h>
int road_trees[10000];
int del_tree(int min, int max)
{
    int i;
    for (i = min; i <= max; i++)
    {
        road_trees[i] = 0;
    }
}

int main()
{
    int line, road_length, count;
    int min, max;
    int i;
    count = 0;
    scanf("%d %d", &road_length, &line);
    for (i = 0; i <= road_length; i++)
    {
        road_trees[i] = 1;
    }
    for (i = 0; i < line; i++)
    {
        scanf("%d %d", &min, &max);
        del_tree(min, max);
    }
    for (i = 0; i <= road_length; i++)
    {
        if (road_trees[i] == 1)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}