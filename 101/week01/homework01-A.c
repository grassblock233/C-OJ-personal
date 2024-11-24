/*问题 A: 计算实领工资-输入输出[易]
题目描述
根据基本工资计算实领工资：某公司员工的工资由基本工资、物价津贴、房租津贴组成。其中物价津贴是基本工资的40%，房屋津贴是基本工资的20%，编写一个程序计算实领工资。
输入
包含多组测试数据，直到读至输入文件末尾为止。

每组测试数据包括一行：一个整数n，为某员工的基本工资。

输出
每组测试数据输出三行，均保留小数点后六位，行末无空格。

第一行：物价津贴

第二行：房屋津贴

第三行：总工资

样例输入
1500

样例输出
物价津贴为600.000000
房屋津贴为300.000000
总工资为2400.000000*/
#include <stdio.h>
int main(){
    float salary,price_allowance,housing_allowance,total_salary;
    while (scanf("%f",&salary)!=EOF)
    {
        price_allowance = salary * 0.4;
        housing_allowance = salary * 0.2;
        total_salary = salary + housing_allowance + price_allowance;
        printf("物价津贴为%f\n",price_allowance);
        printf("房屋津贴为%f\n",housing_allowance);
        printf("总工资为%f\n",total_salary);
    }
    return 0;
}