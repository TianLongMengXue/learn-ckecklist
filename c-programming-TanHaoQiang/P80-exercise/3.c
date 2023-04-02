#include <stdio.h>
#include <math.h>
#define d 300000 // 贷款额度
#define p 6000 // 每月还款金额
#define r 0.01 // 月利率
int main(void)
{
    double part = 0.0, res = 0.0;
    part = p / (p - d * r);
    res = log(part) / log(1 + r);
    printf("还清贷款的月数为: %.1f\n", res);
    return 0;
}