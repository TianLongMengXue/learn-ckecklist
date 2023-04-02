#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint64_t sum = 0, temp = 0, i = 0;
    int64_t n = 0, a = 0;
    printf("please enter a and n :");
    scanf("%lld%lld", &a, &n);
    if(a <= 0 || n <= 0)
    {
        puts("输入的数值不能小于 0 !");
    }
    else
    {
        for(i = 0; i < n; ++i)
    	{
            if(i)
            {
                printf("+");
            }
        	temp = (uint64_t)a + (temp * 10);
            sum += temp;
            printf("%llu", temp);
    	}
        printf("=%llu\n", sum);
    }
    return 0;
}