/*问题 B: 计算存款的本息（数据类型）[易]
题目描述
输入存款金额money、存期year和年利率rate，根据公式计算存款到期时的本息合计sum（税前），输出时保留2位小数。
为了保证测试结果的一致性，请将存款金额money和年利率rate设定为double类型。

输入
包含多组测试数据，直到读至输入文件末尾为止。

每组测试数据包括一行：存款金额money、存期year和年利率rate。

输出
每组测试数据输出一行，为存款到期时的本息合计sum（税前），输出时保留2位小数，行末无空格。

样例输入
1000   1   0.1

样例输出
1100.00

提示
需要考虑复利，也就是利滚利。每年的本息和是之后年度的本金，所以程序采用需要循环结构处理。*/
#include <stdio.h>
int main()
{
    int year,i;
    double money,rate,sum,rate1;
    while (scanf("%lf %d %lf",&money,&year,&rate)!=EOF)
    {
        sum = money;
        rate1 = rate + 1.0;
        for (i = 0; i < year; i++)
        {
            sum = sum * rate1;
        }
        printf("%.2lf\n",sum);
    }
    return 0;
}