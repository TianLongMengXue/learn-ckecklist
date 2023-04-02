#include <stdio.h>
int main(void)
{
    float f, c;
    f = 64F;
    c = (float)(5.0 / 9.0 * (f - 32));
    printf("f = %.2f\nc = %.2f\n", f, c);
    return 0;
}