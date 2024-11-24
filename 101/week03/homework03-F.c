#include <stdio.h>
int main()
{
    int n, i;
    float s, h, tmp;
    while (scanf("%d", &n) != EOF)
    {
        tmp = 50; /*变量tmp：反弹高度*/
        s = 100;  /*变量s：经过的路程*/
        h = 0;    /*变量h：第n次反弹高度*/
        /*初始化变量：第一次下落经过100m，反弹高度为50m*/
        for (i = 1; i < n; i++) 
        /*先判断一下输入n，因为第一次落地路程为100m，之后第n次落地路程=100+第n次反弹高度*2
        因此这里变量i赋值1*/
        /*之后就使用for循环即可*/
        {
            s = s + tmp * 2;
            tmp = tmp / 2.0;
        }
        h = tmp;
        printf("共经过%.5f米\n第n次反弹%.5f米\n", s, h);
    }
    return 0;
}