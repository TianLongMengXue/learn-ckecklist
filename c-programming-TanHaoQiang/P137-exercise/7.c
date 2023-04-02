#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main(void)
{
    double sum = 0.0, temp = 0.0;
    uint8_t i = 0;
    for(i = 1; i <= 100; ++i)
    {
        sum += (double)i;
    }
    for(i = 1; i <= 50; ++i)
    {
        sum += pow((double)i, 2.0);
    }
    for(i = 1; i < 10; ++i)
    {
        sum += 1.0 / (double) i;
    }
    printf("result=%.3f\n", sum);
    return 0;
}