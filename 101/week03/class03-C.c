#include <stdio.h>
int main()
{   int input,i,output;
    while (scanf("%d",&input)!=EOF)
    {
        for (i=1;i<=3;i++)
        {
            output = input % 2;
            input = input / 2;
        }
        printf("%d\n",output);
    }
    return 0;
}