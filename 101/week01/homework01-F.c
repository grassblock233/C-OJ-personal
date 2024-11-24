/*问题 F: 计算三角形的面积和周长（分支）[易]
题目描述
输入三角形的3条边a、b、c，如果能构成一个三角形，输出面积area和周长perimeter（保留两位小数）；否则，输出“There sides do not correspond to a valid triangle”。在一个有效的三角形中，任意两边之和大于第三边。
三角形面积计算公式area=sqrt(s(s-a)(s-b)(s-c))，其中s=(a+b+c)/2。

输入
输入包括多组测试数据，直到读至输入文件末尾为止。
每组测试数据包括一行：三个整数a b c，分别表示三角形的三边长。

输出
每组测试数据包括一行：
若可以构成三角形，则输出面积area和周长perimeter（保留两位小数）。
否则，输出“There sides do not correspond to a valid triangle”。
行末无空格。

样例输入
3  4  5

样例输出
6.00 12.00*/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    float area,perimeter,s;
    while (scanf("%d %d %d",&a,&b,&c)!=EOF)
    {
        if (a+b>c && b+c>a && a+c>b)
        {
            s = (a+b+c)/2;
            area = sqrt(s*(s-a)*(s-b)*(s-c));
            perimeter = a+b+c;
            printf("%.2f %.2f\n",area,perimeter);
        }
        else
        {
            printf("There sides do not correspond to a valid triangle\n");
        }
    }
}