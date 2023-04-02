#include <stdio.h>
#define BASE_SALARY 1000 // 基本工资
#define OVERTIME_SALARY 1500 // 加班部分的工资
#define BASE_TIME 40 // 加班时长的分界点
#define TAX_PART_ONE 300 // 税的第一个分界点
#define TAX_PART_TWO 450 // 税的第二个分界点
#define TAX_RATE_ONE 0.15 // 税的第一部分的税率
#define TAX_RATE_TWO 0.2 // 税的第二部分的税率
#define TAX_RATE_THREE 0.25 // 税的第三部分的税率
#define TAX_BASE_ONE (TAX_PART_ONE * TAX_RATE_ONE) // 工资 300 的税
#define TAX_BASE_TWO (TAX_BASE_ONE + (TAX_PART_TWO - TAX_PART_ONE) * TAX_RATE_TWO) // 工资 450 的税
int main(void)
{
    double worktime = 0.0, pre_salary = 0.0, tax = 0.0, late_salary = 0.0;
    printf("输入本周的工作时长(以小时为单位,输入0结束程序): ");
    scanf("%lf", &worktime);
    while(worktime > 0)
    {
        if(worktime <= BASE_TIME)
        	pre_salary = worktime * BASE_SALARY;
        else
            pre_salary = (worktime - BASE_TIME) * OVERTIME_SALARY + BASE_TIME * BASE_SALARY;
        if(pre_salary < TAX_PART_ONE)
        {
            tax = pre_salary * TAX_RATE_ONE;
            late_salary = pre_salary - tax;
        }
        else if(pre_salary < TAX_PART_TWO)
        {
            tax = TAX_BASE_ONE + (pre_salary - TAX_PART_ONE) * TAX_RATE_TWO;
            late_salary = pre_salary - tax;
        }
        else
        {
            tax = TAX_BASE_TWO + (pre_salary - TAX_PART_TWO) * TAX_RATE_THREE;
            late_salary = pre_salary - tax;
        }
        printf("工资总额 | 税 金 | 净收入\n");
    	printf("%-8.2f|%-8.2f|%-8.2f\n", pre_salary, tax, late_salary);
        printf("输入本周的工作时长(以小时为单位,输入0结束程序): ");
    	scanf("%lf", &worktime);
    }
    return 0;
}