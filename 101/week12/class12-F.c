#include <stdio.h>

int main()
{
    int k; /*位*/
    int trans;
    int count = 0;
    int tmp[10];
    int str[150];
    /*input*/
    for (int i = 0; i < 150; i++)
    {
        scanf("%d", &str[i]);
        if (str[i] == 0)
        {
            break;
        }
        count++;
    }
    /*trans*/
    for (int i = 0; i < count; i++)
    {
        trans = str[i];
        for (int n = 0; n < 7; n++)
        {
            tmp[n] = 0;
        }
        for (int n = 0; trans > 0; n++)
        {
            tmp[n] = trans % 2;
            trans /= 2;
        }
        trans = 0;
        k = 1;
        for (int n = 6; n >= 0; n--)
        {
            trans += tmp[n] * k;
            k *= 2;
        }
        printf("%c", trans);
    }
}