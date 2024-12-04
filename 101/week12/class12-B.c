#include <stdio.h>
#define LEAP_YEAR(y) (y % 400 == 0 || (y % 4 == 0 && y % 100 != 0)) ? printf("L") : printf("N")

int main()
{
    int year;
    scanf("%d", &year);
    LEAP_YEAR(year);
}