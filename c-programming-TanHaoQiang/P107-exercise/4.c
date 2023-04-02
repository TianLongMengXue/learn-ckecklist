#include <stdio.h>
#include <stdint.h>
int main(void)
{
    int64_t a = 0, b = 0, c = 0, max = 0;
    scanf("%d%d%d", &a, &b, &c);
    max = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("max = %d\n", max);
    return 0;
}