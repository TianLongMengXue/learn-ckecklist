#include <stdio.h>
#include <float.h>
int main(void)
{
    float f_res = 1.0F/3.0F;
    double d_res = 1.0/3.0;
    printf("6 precision: %.6f, %.6f\n", f_res, d_res);
    printf("12 precision: %.12f, %.12f\n", f_res, d_res);
    printf("16 precision: %.16f, %.16f\n", f_res, d_res);
    printf("FLT_DIG=%u, DBL_DIG=%u\n", FLT_DIG, DBL_DIG);
    return 0;
}