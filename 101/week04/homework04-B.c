#include <stdio.h>
int main()
{
    float score[10];
    float max, min, n1, n2;
    float final_score;
    int i;
    n1 = 1;
    n2 = 1;
    final_score = 0;
    scanf("%f", &score[0]);
    max = score[0];
    min = score[0];
    for (i = 1; i < 10; i++)
    {
        scanf("%f", &score[i]);
        if (score[i] < min)
        {
            min = score[i];
        }
        if (score[i] > max)
        {
            max = score[i];
        }
    }
    for (i = 0; i < 10; i++)
    {
        if (n1)
        {
            if (score[i] == min)
            {
                score[i] = 0;
                n1 = 0;
            }
        }
        if (n2)
        {
            if (score[i] == max)
            {
                score[i] = 0;
                n2 = 0;
            }
        }
        final_score = final_score + score[i];
    }
    final_score = final_score/8.0;
    printf("%.3f",final_score);
    return 0;
}