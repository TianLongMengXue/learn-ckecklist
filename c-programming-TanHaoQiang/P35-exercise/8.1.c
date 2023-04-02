#include <stdio.h>
int main(void)
{
    int i = 0;
    for(i = 1900; i < 2000; ++i)
        if((0 == i%4 && 0 != i%100) || (0 == i%100 && 0 == i%400))
            printf("%d是闰年!\n", i);
    return 0;
}
