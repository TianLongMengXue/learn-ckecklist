#include <stdio.h>
int main(void)
{
    int number = 0, odd_count = 0, odd_sum = 0, even_count = 0, even_sum = 0;
    scanf("%d", &number);
    while(number > 0)
    {
        if(0 == number % 2)
        {
            ++even_count;
            even_sum+=number;
        }
        else
        {
            ++odd_count;
            odd_sum+=number;
        }
        scanf("%d", &number);
    }
    printf("一共输入 %d 个偶数,平均值为 %.2f\n", even_count, (double)even_sum/even_count);
    printf("一共输入 %d 个奇数,平均数为 %.2f\n", odd_count, (double)odd_sum/odd_count);
    return 0;
}