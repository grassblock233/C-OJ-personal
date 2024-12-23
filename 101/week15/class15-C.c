#include <stdio.h>
#define SWAP(a, b) \
    a = b - a;     \
    b = b - a;     \
    a = a + b

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    SWAP(a, b);
    printf("%d %d", a, b);
    return 0;
}