#include <stdio.h>
int main()
{
    int input,tmp,i,output;
    int shu[4]={};
    while (scanf("%d",&input)!=EOF)
    {
        output = 0;
        for (i = 0; i < 4; i++)
        {
            tmp = input%10;
            input = input/10;
            output = output + tmp;
        }
        printf("%d\n",output);
    }
    
    return 0;
}