#include <stdio.h>
int main(void)
{
    char ch = 0;
    int ei_count = 0, flag = 0;
    puts("输入一段包含 ei 的文本:");
    while((ch = getchar())!='#')
    {
        if('e' == ch)
        {
            flag = 1;
            continue;
        }
        if(flag)
        {
            flag = 0;
            if('i' == ch)
                ++ei_count;
            continue;
        }
    }
    printf("本段文本中 ei 出现的次数为 %d \n", ei_count);
    return 0;
}