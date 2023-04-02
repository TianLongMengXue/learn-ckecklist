#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define BASE_SALARY_CLASS_ONE 8.75 // 基本工资为8.75美元/小时
#define BASE_SALARY_CLASS_TWO 9.33 // 基本工资为9.33美元/小时
#define BASE_SALARY_CLASS_THREE 10.0 // 基本工资为10.0美元/小时
#define BASE_SALARY_CLASS_FOUR 11.2 // 基本工资为11.2美元/小时
#define BASE_WORK_TIME 40 // 基本工作时长和加班工作时长的分界点40小时
#define OVERTIME_SALARY_RATE 1.5 // 加班工资是基本工资的1.5倍
#define TAX_PART_ONE 300 // 税的第一个分界点300美元
#define TAX_PART_TWO 450 // 税的第二个分界点450美元
#define TAX_RATE_ONE 0.15 // 税的第一部分的税率0.15
#define TAX_RATE_TWO 0.2 // 税的第二部分的税率0.2
#define TAX_RATE_THREE 0.25 // 税的第三部分的税率0.25
#define TAX_BASE_ONE (TAX_PART_ONE * TAX_RATE_ONE) // 工资 300 的税
#define TAX_BASE_TWO (TAX_BASE_ONE + (TAX_PART_TWO - TAX_PART_ONE) * TAX_RATE_TWO) // 工资 450 的税
void calc_salary_tax(const double base_salary_class);
int main(void)
{
	/*
	 * choice 表示用户选择的工作时薪标准或者退出程序
	*/
    int choice = 0, i = 0;
    do
    {
        for(i = 0; i < 66; ++i) printf("*"); // 分割线
        printf("\n");
        puts("\t\t输入与所需支付时薪相对应的数字: ");
        printf("\t1)$ 8.75/每小时\t\t\t\t2)$ 9.33/每小时\n");
        printf("\t3)$10.00/每小时\t\t\t\t4)$11.20/每小时\n");
        printf("\t\t\t\t5)退出程序\n");
        for(i = 0; i < 66; ++i) printf("*"); // 分割线
        printf("\n");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
            	system("cls");
            	calc_salary_tax(BASE_SALARY_CLASS_ONE);
            	system("cls");
                break;
            case 2:
            	system("cls");
            	calc_salary_tax(BASE_SALARY_CLASS_TWO);
            	system("cls");
                break;
            case 3:
            	system("cls");
            	calc_salary_tax(BASE_SALARY_CLASS_THREE);
            	system("cls");
                break;
            case 4:
            	system("cls");
            	calc_salary_tax(BASE_SALARY_CLASS_FOUR);
            	system("cls");
                break;
        	case 5:
        		system("cls");
                puts("感谢使用本程序!");
                exit(0);
            default:
            	system("cls");
                puts("请输入正确的菜单序号!!!");
                break;
        }
    }while(1);
    return 0;
}
void calc_salary_tax(const double base_salary_class)
{
	/*
	 * worktime 表示本周工作时长
	 * pre_salary 表示税前工资
	 * tax 表示本周工作所得需要缴纳的税款额度
	 * late_salary 表示本周工作所得交税
	*/
	double worktime = 0.0, pre_salary = 0.0, tax = 0.0, late_salary = 0.0;
    printf("输入本周的工作时长(以小时为单位,输入-1结束): ");
    scanf("%lf", &worktime);
    
    //printf("worktime=%.2f\n", worktime);
    
    while(worktime >= 0)
    {
        if(worktime <= BASE_WORK_TIME) // 本周工作时长不超过40小时
        {
        	pre_salary = worktime * base_salary_class;
        	//printf("worktime<=40;pre_salary=%.2f\n", pre_salary);
		}
        else // 本周工作时长超过40小时
        {
        	pre_salary = (worktime - BASE_WORK_TIME) * base_salary_class * OVERTIME_SALARY_RATE + BASE_WORK_TIME * base_salary_class;
		}
            
        if(pre_salary <= TAX_PART_ONE) // 税前工资小于300美元时需要缴纳的税收额度以及税后工资
        {
            tax = pre_salary * TAX_RATE_ONE;
            late_salary = pre_salary - tax;
        }
        else if(pre_salary <= TAX_PART_TWO) // 税前工资在300~450美元之间时需要缴纳的税收额度以及税后工资
        {
            tax = TAX_BASE_ONE + (pre_salary - TAX_PART_ONE) * TAX_RATE_TWO;
            late_salary = pre_salary - tax;
        }
        else
        {
            tax = TAX_BASE_TWO + (pre_salary - TAX_PART_TWO) * TAX_RATE_THREE;
            late_salary = pre_salary - tax;
        }
        
        printf("    工资总额    |    税    金    |    净 收 入\n");
    	printf("%-16.2f|%-16.2f|%-16.2f\n", pre_salary, tax, late_salary);
        
        printf("输入本周的工作时长(以小时为单位,输入-1结束): ");
        scanf("%lf", &worktime);
    
    	//printf("worktime=%.2f\n", worktime);
    }
}