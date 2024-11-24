#include <stdio.h>
int main()
{
    int head, foot, number_pigeon, number_rabbit;
    while (scanf("%d %d", &head, &foot) != EOF)
    {
        if (head == 0 && foot == 0)
        {
            return 0;
        }
        if (foot % 2 != 0 || foot<head*2 || foot>head*4)
        {
            printf("Error\n");
        }
        else
        {
            number_rabbit = (foot - 2 * head) / 2;
            number_pigeon = head - number_rabbit;
            printf("%d %d\n", number_pigeon, number_rabbit);
        }
    }
    return 0;
}