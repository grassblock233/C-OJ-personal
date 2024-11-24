/*问题 B: 据年、月、日计算天数（分支）[难]
输入某年、月、日，判断其在一年中是第几天。*/
#include <stdio.h>
int main()
{
    int y,m,d,output;
    int i;
    int list_1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    int list_2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
    while (scanf("%d %d %d",&y,&m,&d)!=EOF)
    {
        output = 0;
        i = 1;
        if ( y%4==0 && y%100!=0 || y%400==0 )
        {
            for (;i<m;i++)
            {
                output = output + list_2[i-1];
            }
            output = output + d;
            printf("%d\n",output);
            
        }
        else
        {
            for (;i<m;i++)
            {
                output = output + list_1[i-1];
            }
            output = output + d;
            printf("%d\n",output);
        }
    }
    return 0;
}