#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main(void)
{
    int64_t number1 = 0, number2 = 0;
    uint64_t max = 0, min = 0, i = 0, max_divisor = 0, min_multiple = 0;
    printf("enter two over zero integers: ");
    scanf("%lld%lld", &number1, &number2);
    if(number1 <= 0 || number2 <= 0)
    {
        /*
         * 1、当用户输入的数值中含有非正整数时,输入有误
         * 2、当用户使用数值和字符的组合时,scanf()函数不能正确读取,那么就不能正确存储数值,输入有误
        */
        puts("error input!");
    }
    else if(number1 == number2)
    {
        printf("max divisor is %lld, min multiple is %lld\n", number1, number2);
    }
    else
    {
        max = number1 > number2 ? number1 : number2;
        min = number1 > number2 ? number2 : number1;
        for(i = 1; i <= min; ++i)
        {
            if((0 == number1 % i) && (0 == number2 % i))
            {
                max_divisor = i;
            }
        }
        i = max;
        while(i <= (pow(2,64) - 1))
        {
            /*
             * uint64_t 能存储的最大正整数是 pow(2,64) - 1 ,再大就会溢出
            */
            if((0 == i % max) && (0 == i % min))
            {
                min_multiple = i;
                break; // 结束循环
            }
            ++i; // 推进循环,没有这句话,一旦if为假,就是无限死循环
        }
        printf("max divisor is %lld, min multiple is %lld\n", max_divisor, min_multiple);
    }
    return 0;
}