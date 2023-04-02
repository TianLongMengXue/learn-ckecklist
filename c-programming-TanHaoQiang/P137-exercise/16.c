/*
 * 对于上半部分
 * 每行 * 的个量都是奇数,每行的个数=当前的行数*2-1
 * 每行空格的个数=没有空格的哪一行的行数-当前行的行数
*/
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint8_t start_count = 0, space_count = 0, line_count = 7;
    // 上半部分
    for(uint8_t i = 1; i <= line_count / 2 + 1; ++i)
    {
        // 空格
        for(uint8_t j = 1; j <= line_count / 2 + 1 - i; ++j)
        {
            printf(" ");
        }
        // *
        for(uint8_t j = 1; j <= 2 * i - 1; ++j )
        {
            printf("*");
        }
        printf("\n");
    }
    // 下半部分
    for(uint8_t i = line_count / 2; i >= 1; --i)
    {
        // 空格
        for(uint8_t j = line_count / 2 + 1 - i; j >= 1; --j)
        {
            printf(" ");
        }
        // *
        for(uint8_t j = 2 * i - 1; j >= 1; --j)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}