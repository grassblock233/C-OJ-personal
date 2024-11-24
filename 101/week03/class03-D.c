#include <stdio.h>
int main()
{
    int input,tmp,ch1,ch2,i,n;
    int shu[4]={};
    while (scanf("%d",&input)!=EOF)
    {
        for (i = 0; i < 4; i++)
        {
            tmp = input%10;
            input = input/10;
            tmp = (tmp+9)%10;
            shu[i] = tmp;
        }
        ch1 = shu[0];
        ch2 = shu[2];
        shu[0] = ch2;
        shu[2] = ch1;
        ch1 = shu[1];
        ch2 = shu[3];
        shu[1] = ch2;
        shu[3] = ch1;
        for (n = 0; n < 4; n++)
        {
            printf("%d",shu[3-n]);
        }
        printf("\n");

    }
    
    return 0;
}