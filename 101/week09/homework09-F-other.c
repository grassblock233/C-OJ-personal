#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    char num1[10][4] = {"��", "һ", "��", "��", "��", "��", "��", "��", "��", "��"};
    while (scanf("%d", &n) != EOF)
    {
        int f[4] = {0}; // �ж���
        if (n >= 1000)  // ǧλ����
        {
            f[0] = 1;
            printf("%sǧ", num1[n / 1000]);
        }
        if (n % 1000 >= 100) // ��λ����
        {
            f[1] = 1;
            printf("%s��", num1[n / 100 % 10]);
        }
        if (!(n % 1000 == 0)) // ����ǧ����λΪ��
            if (f[0] && !f[1])
            {
                printf("��");
            }
        if (n % 100 >= 10) // ʮλ����
        {
            f[2] = 1;
            if (n % 100 == 10) // ʮ
            {
                printf("ʮ");
            }
            else
            {
                printf("%sʮ", num1[n / 10 % 10]);
                if (n % 10 == 0)
                {
                    printf("\n");
                    continue;
                } // ��ʮ
            }
        }
        if (!(n % 100 == 0)) // ������
            if (f[1] && !f[2])
            {
                printf("��");
            } // ʮλΪ��
        if (n % 10 >= 0)
        {
            if (n % 10 == 0) // ��
            {
                if (f[2] == 0 && f[1] == 0 && f[0] == 0)
                    printf("��");
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