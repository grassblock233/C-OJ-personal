/*问题 E: 2000年秋浙江省计算机等级考试二级C 编程题(1)
题目描述
编制程序，输入n个整数（n从键盘输入，n>0），输出它们的偶数和。

输入
输入包括多组测试数据，直到读至输入文件末尾为止。
每组数据包括两行：
第一行：一个整数n，表示接下来的整数个数。
第二行：n个整数。

输出
每组测试数据输出一行，为n个整数中偶数元素的和，行末无空格。

样例输入
10
1 2 3 4 5 6 7 8 9 10

样例输出
30*/
#include <stdio.h>
int main()
{
    int input,output;
    int count,judge;
    while (scanf("%d",&count)!=EOF)
    {
        output = 0;
        for (; count > 0; count--)
        {
            scanf("%d",&input);  
            judge = input % 2;
            if (judge == 0)
            {
                output = output + input;
            }       
        }
        printf("%d\n",output);
    }
    
}