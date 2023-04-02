#include <stdio.h>
#include <stdint.h>
#define LIMIT_UP 20
int main(void)
{
    uint16_t up = 2, down = 1, temp = 1;
    double res = 0.0;
    uint8_t i = 0;
    for(i = 0; i < LIMIT_UP; ++i)
    {
        res += (double)(up) / (double)(down);
        down = up;
        up = up + temp;
        temp = down;
    }
    printf("res = %.3f\n", res);
    return 0;
}