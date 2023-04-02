#include <stdio.h>
#include <math.h>
int main(void)
{
    double p = 0.0, r = 0.07;
    int n = 10;
    p = pow(1 + r, n);
    printf("%.3f\n", p);
    return 0;
}