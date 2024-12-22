#include <stdio.h>

int main()
{
    int N;
    while (scanf("%d", &N) == 1)
    {
        int C[100000];
        for (int i = 0; i < N; i++)
        {
            scanf("%d", &C[i]);
        }
        for (int K = 65; K <= 90; K++)
        {
            int valid = 1;
            for (int i = 0; i < N; i++)
            {
                int P = C[i] ^ K;
                if (P < 65 || P > 90)
                {
                    valid = 0;
                    break;
                }
            }
            if (valid)
            {
                for (int i = 0; i < N; i++)
                {
                    printf("%c", C[i] ^ K);
                }
                printf("\n");
                break;
            }
        }
    }
    return 0;
}