#include <stdio.h>

int up(int a)
{
    int output = 0;
    while (output<=a)
    {
        output = output + 100;
    }
    output -=100;
    if (output<=0)
    {
        output = 0;
    }
    return output;
}

int main()
{
    int money,money1,budget;
    float mum,back;
    int i;
    money = 0;
    mum = 0;
    back = 0;
    i = 0;
    while (i<12 && money>=0)
    {
        i = i + 1;
        scanf("%d",&budget);
        money = money + 300 - budget;
        money1 = up(money);
        mum += money1;
        money = money - money1;
    }
    if (money<0)
    {
        printf("-%d",i);
    }
    else
    {
        back = money + mum*1.2;
        printf("%.0f",back);
    }
    
    return 0;
}