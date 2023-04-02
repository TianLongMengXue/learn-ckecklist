#include <stdio.h>
int main(void)
{
    float p0 = 1000.0F, r1 = 0.0036F, r2 = 0.0225F, r3 = 0.0198F, p1 = 0.0F, p2 = 0.0F, p3 = 0.0F;
    p1 = (float)(p0 * (1 + r1));
    p2 = (float)(p0 * (1 + r2));
    p3 = (float)(p0 * (1 + r3 / 2) * (1 + r3 / 2));
    printf("p1 = %.2f\np2 = %.2f\np3 = %.2f\n", p1, p2, p3);
    return 0;
}