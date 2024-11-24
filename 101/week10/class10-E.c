#include <stdio.h>

int main()
{
    int i;        /*loop*/
    int n, com_n; /*input*/
    int count = 0;
    int temp;
    int flag = 1;
    scanf("%d", &n);
    for (temp = n; temp > 0; temp /= 10)
    {
        count++;
    }
    com_n = n * n;
    for (i = 0; i < count; i++)
    {
        temp = n % 10;
        n /= 10;
        if (temp != com_n % 10)
        {
            flag = 0;
            break;
        }
        com_n /= 10;
    }
    if (flag == 0)
    {
        printf("不是守形数");
    }
    else
    {
        printf("是守形数");
    }
    return 0;
}