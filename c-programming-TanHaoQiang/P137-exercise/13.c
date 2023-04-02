#include <stdio.h>
#include <stdint.h>
#include <math.h>
int main(void)
{
    uint16_t a = 10;
    double x = 0.0, x_next = 0.0;
    x = (double) a;
    x_next = (x + (double)a / x) / 2;
    while(fabs(x_next - x) >= 1e-5)
    {
        x = x_next;
        x_next = (x + (double)a / x) / 2;
    }
    printf("%.3f\n", x_next);
    return 0;
}