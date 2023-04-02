#include <stdio.h>
#include <math.h>
#define R 1.5 //圆半径
#define H 3 // 圆柱的高
int main(void)
{
    printf("圆周长为 : %.2f\n", 2 * M_PI * R);
    printf("圆面积为 : %.2f\n", M_PI * pow(R, 2));
    printf("圆球表面积为 : %.2f\n", 4 * M_PI * pow(R, 2));
    printf("圆球体积为 : %.2f\n", 4.0 / 3.0 * M_PI * pow(R, 3));
    printf("圆柱体积为 : %.2f\n", M_PI * pow(R, 2) * H);
    return 0;
}