#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main(void)
{
    uint16_t i = 0, j = 0, temp = 0;
    for(i = 100; i <= 999; ++i)
    {
        j = i;
        temp = (uint16_t)pow((double)(j%10), 3.0);
        j /= 10;
        temp += (uint16_t)pow((double)(j%10), 3.0);
        j /= 10;
        temp += (uint16_t)pow((double)(j), 3.0);
        if(temp == i)
        {
            printf("%hu 是水仙花数\n", i);
        }
    }
    return 0;
}