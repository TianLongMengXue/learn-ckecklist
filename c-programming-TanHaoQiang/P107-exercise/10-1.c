#include <stdio.h>
#include <stdint.h>
#define PROFIT_AMOUNT_ONE 100000 // 利润提成第一个分界点
#define PROFIT_AMOUNT_TWO 200000 // 利润提成第二个分界点
#define PROFIT_AMOUNT_THREE 400000 // 利润提成第三个分界点
#define PROFIT_AMOUNT_FOUR 600000 // 利润提成第四个分界点
#define PROFIT_AMOUNT_FIVE 1000000 // 利润提成第五个分界点
#define COMMISSION_RATE_ONE 0.1 // 小于等于100000元的提成比例
#define COMMISSION_RATE_TWO 0.075 // 大于100000元小于等于200000元的提成比例
#define COMMISSION_RATE_THREE 0.05  // 大于200000元小于等于400000元的提成比例
#define COMMISSION_RATE_FOUR 0.03 // 大于400000元小于等于600000元的提成比例
#define COMMISSION_RATE_FIVE 0.015 // 大于600000元小于等于1000000元的提成比例
#define COMMISSION_RATE_SIX 0.01 // 大于1000000元的提成比例
#define COMMISSION_AMOUNT_ONE (PROFIT_AMOUNT_ONE * COMMISSION_RATE_ONE) // 100000提成金额
#define COMMISSION_AMOUNT_TWO (COMMISSION_AMOUNT_ONE + (PROFIT_AMOUNT_TWO - PROFIT_AMOUNT_ONE) * COMMISSION_RATE_TWO) // 200000提成金额
#define COMMISSION_AMOUNT_THREE (COMMISSION_AMOUNT_TWO + (PROFIT_AMOUNT_THREE - PROFIT_AMOUNT_TWO) * COMMISSION_RATE_THREE) // 400000提成金额
#define COMMISSION_AMOUNT_FOUR (COMMISSION_AMOUNT_THREE + (PROFIT_AMOUNT_FOUR - PROFIT_AMOUNT_THREE) * COMMISSION_RATE_FOUR) // 600000提成金额
#define COMMISSION_AMOUNT_FIVE (COMMISSION_AMOUNT_FOUR + (PROFIT_AMOUNT_FIVE - PROFIT_AMOUNT_FOUR) * COMMISSION_RATE_FIVE) // 1000000提成金额
int main(void)
{
    double profit = 0.0, commission = 0.0;
    printf("Enter profit: ");
    scanf("%lf", &profit);
    if(profit < 0.0) // 没有利润
        commission = 0.0;
    else if(profit <= PROFIT_AMOUNT_ONE) // 利润小于等于100000元
        commission = profit * COMMISSION_RATE_ONE;
    else if(profit <= PROFIT_AMOUNT_TWO) // 利润小于等于200000元
        commission = COMMISSION_AMOUNT_ONE + (profit - PROFIT_AMOUNT_ONE) * COMMISSION_RATE_TWO;
    else if(profit <= PROFIT_AMOUNT_THREE) // 利润小于等于400000元
        commission = COMMISSION_AMOUNT_TWO + (profit - PROFIT_AMOUNT_TWO) * COMMISSION_RATE_THREE;
    else if(profit <= PROFIT_AMOUNT_FOUR) // 利润小于等于600000元
        commission = COMMISSION_AMOUNT_THREE + (profit - PROFIT_AMOUNT_THREE) * COMMISSION_RATE_FOUR;
    else if(profit <= PROFIT_AMOUNT_FIVE) // 利润小于等于1000000元
        commission = COMMISSION_AMOUNT_FOUR + (profit - PROFIT_AMOUNT_FOUR) * COMMISSION_RATE_FIVE;
    else
        commission = COMMISSION_AMOUNT_FIVE + (profit - PROFIT_AMOUNT_FIVE) * COMMISSION_RATE_SIX;
    printf("提成金额为%.2f", commission);
    return 0;
}