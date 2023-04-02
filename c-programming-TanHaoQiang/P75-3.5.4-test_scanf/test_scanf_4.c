#include <stdio.h>
int main(void)
{
    int a = 1, b = 2, c = 3;
    scanf("%d,%d", &a, &b);
    scanf("c=%d", &c);
    printf("a=%d,b=%d,c=%d\n", a, b, c);
    return 0;
}