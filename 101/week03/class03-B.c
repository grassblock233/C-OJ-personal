#include <stdio.h>
int main()
{
    int n,i;
    char input[80];
    while (scanf("%d",&n)!=EOF)
    {
        getchar();
        for (i = 0; i < n; i++)
        {
            input[i] = getchar();
            if (input[i]>='A' && input[i]<='Z' || input[i]>='a' && input[i]<='z')
            {
                putchar(input[i]);
            }
            
        }
        printf("\n");
        
    }
    
    return 0;
}