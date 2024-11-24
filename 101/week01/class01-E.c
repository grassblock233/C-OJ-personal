/*问题 E: 大写字母判断-分支结构[易]
题目描述
编写一个程序，验证用户输入的一个字符是否是大写字母。

输入
包含多组测试数据，直到读至输入文件末尾为止。

每组测试数据包括一行：一个字符。

输出
每组测试数据输出一行：

若输入的字符是大写字母，则输出 Yes ；否则输出 No ，行末无空格。

样例输入
a
A
4
样例输出
No
Yes
No*/
#include <stdio.h>
int main(){
    char input;
    while (scanf("%c",&input)!=EOF)
    {
        if (input == "\n")
        {
            continue;
        }
        if (input >='A' && input <='Z')
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}