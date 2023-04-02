#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint16_t i = 0, j = 0, sum = 0, factor[1000] = {0}, index = 0;
    for(i = 1; i <= 1000; ++i)
    {
        sum = index = 0;
        for(j = 1; j < i; ++j)
        {
            if(0 == i % j)
            {
                sum += j;
                factor[index] = j;
                ++index;
            }
        }
        if(sum == i)
        {
            printf("%hd its factors are ", i);
            for(j = 0; j < index; ++j)
            {
                if(j)
                {
                    putchar(',');
                }
                if(factor[j] > 0)
                {
                	printf("%hd", factor[j]);
                	factor[j] = 0;
				}
            }
            putchar('\n');
        }
    }
    return 0;
}