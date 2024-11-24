/*问题 F: 自来水费计算（分支）[易]
题目描述
根据居民月用水量x（吨）计算并输出应该缴纳的水费y（元），输出时保留2位小数。两者的函数关系如下：

输入
包含多组测试数据，直到读至输入文件末尾为止。

每组测试数据包括一行：一个整数 x，表示居民用水量。

输出
每组测试数据输出一行，为应该缴纳的水费 y（结果保留 2 位小数），行末无空格。

样例输入
-1
6
0
样例输出
0.00
8.00
0.00
提示
0<=x<=15，正确代码应该为0 <= x && x <= 15，如果直接写成0<=x<=15，则结果一直为真，原因见教材相关章节。*/
#include <stdio.h>
int main()
{
    float input;
    while (scanf("%f",&input)!=EOF)
    {   
        if (input <0.00)
        {
            input = 0.00;
            printf("%.2f\n",input);
        }
        else if (input >= 0.00 && input <=15.00)
        {
            input = input*4/3;
            printf("%.2f\n",input);
        }
        else if (input >15.00)
        {
            input = input*2.5 - 10.5;
            printf("%.2f\n",input);
        } 
    }
}