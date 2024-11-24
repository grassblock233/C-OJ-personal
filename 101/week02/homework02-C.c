/*问题 C: 鸡兔同笼－分支[中]
一个笼子里面关了鸡和兔子（鸡有两只脚，兔子有四只脚，没有例外）。
已经知道了笼子里面脚的总数a，问笼子里面至少有多少只动物，至多有多少只动物？*/
#include <stdio.h>

int main()
{
    int a, min, max;
    while(scanf("%d", &a) != EOF) 
    {
        if (a >= 32768)
        {
            printf("0 0\n");
        }
        if (a%2 == 0)
        {
            if (a%4 !=0)
            {
                min = max = a/2;
                printf("%d %d\n",min,max);
            }
            else
            {
                min = a/4;
                max = a/2;
                printf("%d %d\n",min,max);
            }
            
        }
        else
        {
            printf("0 0\n");
        }
        
    }
    return 0;
}