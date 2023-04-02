#include <stdio.h>
#include <stdint.h>
int main(void)
{
    int32_t number = 0;
    uint32_t number_copy = 0, number_invert = 0, j = 0;
    uint8_t count = 0, i = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    if(number >= 0)
    {
        number_copy = number;
        if(0 == number)
       		count = 1;
    	else
    	{
            count = 1;
            number_invert = number % 10;
            number /= 10;
        	while(number > 0)
            {
                ++count;
               number_invert = number_invert * 10 + number % 10;
                number /= 10;
            }
            number = number_copy;
            for(i = j = 1; i < count; ++i)
                j *= 10;
            // printf("j = %u\n", j);
            for(;j > 0; j /= 10)
            {
                printf("%u\n", number / j);
                number = number - (number / j) * j;
            }
    	}
        printf("%d共有%hhu位数,它的逆序为%u\n", number_copy, count, number_invert);
    }
    else
        printf("%d 不是一个正整数！\n", number);
    return 0;
}