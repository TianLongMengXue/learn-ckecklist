#include <stdio.h>
#include <stdlib.h>
#define ALONE_BASE_SALARY 17850.00 // 单身税收分界点
#define HOUSEHOLD_BASE_SALARY 23900.00 // 户主税收分界点
#define MARRIED_SHARE_BASE_SALARY 29750.00 // 已婚，共有税收分界点
#define MARRIED_DIVORCE_BASE_SALARY 14875.00 // 已婚，离异税收分界点
#define TAX_RATE_PART_ONE 0.15 // 第一部分税收比率
#define TAX_RATE_PART_TWO 0.28 // 第二部分税收比率
#define STAR_COUNT 66 // 分割线输出的 * 的总个数
void calc_tax(const double base_salary);
int main(void)
{
    /*
     * choice 菜单选项
    */
    int choice = 0, i = 0;
    do
    {
        for(i = 0; i < STAR_COUNT; ++i) // 分割线
        {
            printf("*");
        }
        putchar('\n');
        printf("\t\t输入与纳税人身份相对应的数字序号:\n");
        printf("\t(1)单身\t\t\t\t\t(2)户主\n");
        printf("\t(3)已婚,共有\t\t\t\t(4)已婚,离异\n");
        printf("\t\t\t\t(5)退出程序\n");
        for(i = 0; i < STAR_COUNT; ++i) // 分割线
        {
            printf("*");
        }
        putchar('\n');
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                system("cls");
                calc_tax(ALONE_BASE_SALARY);
                system("cls");
                break;
            case 2:
                system("cls");
                calc_tax(HOUSEHOLD_BASE_SALARY);
                system("cls");
                break;
            case 3:
                system("cls");
                calc_tax(MARRIED_SHARE_BASE_SALARY);
                system("cls");
                break;
            case 4:
                system("cls");
                calc_tax(MARRIED_DIVORCE_BASE_SALARY);
                system("cls");
                break;
            case 5:
                puts("感谢使用本程序!!!");
                exit(0);
                break;
            default:
                puts("输入菜单中正确的数字序号!!!");
                break;
        }
    }while(1);
    return 0;
}
void calc_tax(const double base_salary)
{
    /*
     * salary 纳税人当前的工资
     * tax 纳税人需要缴纳的税款额度
    */
    double salary = 0.0, tax = 0.0;
    printf("输入纳税人的工资(输入 -1 结束): ");
    scanf("%lf", &salary);
    while(salary >= 0)
    {
        if(salary <= base_salary)
        {
            tax = salary * TAX_RATE_PART_ONE;
        }
        else
        {
            tax = base_salary * TAX_RATE_PART_ONE + (salary - base_salary) * TAX_RATE_PART_TWO;
        }
        printf("    税前工资    |    税款额度    \n");
        printf("%-16.2f|%-16.2f\n", salary, tax);
        printf("输入纳税人的工资(输入 -1 结束): ");
    	scanf("%lf", &salary);
    }
}