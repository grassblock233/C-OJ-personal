#include <stdio.h>

int number;

int cu(int n,int p)
{
    int output;
    if (number%n==0)
    {
        output = number/n*p;
    }
    else
    {
        output = ((number/n)+1)*p;
    }
    return output;
}

int main()
{
    int sum;
    int pencil_number[3]={0,0,0};
    int pencil_price[3]={0,0,0};
    int total[3]={0,0,0};
    int i = 0;

    scanf("%d",&number);

    for (;i<3;i++)
    {
        scanf("%d %d",&pencil_number[i],&pencil_price[i]);
        total[i] = cu(pencil_number[i],pencil_price[i]);
    } 
    if (total[0]<=total[1] && total[0]<=total[2])
    {
        sum = total[0];
    }
    if (total[1]<=total[2] && total[1]<=total[0])
    {
        sum = total[1];
    }
    if (total[2]<=total[1] && total[2]<=total[0])
    {
        sum = total[2];
    }
    
    printf("%d",sum);
    return 0;
}