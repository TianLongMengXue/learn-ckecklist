#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint64_t sum = 0, n = 20, i = 0, j = 0, temp = 0;
    for(i = 1; i <= n; ++i)
    {
        if(i-1)
        {
            printf("+");
        }
        for(j = 1, temp = 1; j <= i; ++j)
        {
            temp *= j;
        }
        sum+= temp;
        printf("%llu!", i);
    }
    printf("=%llu\n", sum);
    return 0;
}