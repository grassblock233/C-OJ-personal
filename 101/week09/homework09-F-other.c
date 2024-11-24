#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char num1[10][4] = {"零", "一", "二", "三", "四", "五", "六", "七", "八", "九"};
    while (scanf("%d", &n) != EOF)
    {
        int f[4] = {0}; // 判断零
        if (n >= 1000)  // 千位非零
        {
            f[0] = 1;
            printf("%s千", num1[n / 1000]);
        }
        if (n % 1000 >= 100) // 百位非零
        {
            f[1] = 1;
            printf("%s百", num1[n / 100 % 10]);
        }
        if (!(n % 1000 == 0)) // 非整千，百位为零
            if (f[0] && !f[1])
            {
                printf("零");
            }
        if (n % 100 >= 10) // 十位非零
        {
            f[2] = 1;
            if (n % 100 == 10) // 十
            {
                printf("十");
            }
            else
            {
                printf("%s十", num1[n / 10 % 10]);
                if (n % 10 == 0)
                {
                    printf("\n");
                    continue;
                } // 整十
            }
        }
        if (!(n % 100 == 0)) // 非整百
            if (f[1] && !f[2])
            {
                printf("零");
            } // 十位为零
        if (n % 10 >= 0)
        {
            if (n % 10 == 0) // 零
            {
                if (f[2] == 0 && f[1] == 0 && f[0] == 0)
                    printf("零");
            }
            else
            {
                printf("%s", num1[n % 10]);
            }
        }
        printf("\n");
    }
    return 0;
}