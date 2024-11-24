#include <stdio.h>
int main()
{
    int apple_height[10], taotao_height, i, count;
    count=0;
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &apple_height[i]);
    }
    scanf("%d", &taotao_height);
    for (i = 0; i < 10; i++)
    {
        if(apple_height[i]<=taotao_height+30)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}