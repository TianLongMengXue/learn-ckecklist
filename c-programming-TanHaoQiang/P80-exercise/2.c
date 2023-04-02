#include <stdio.h>
#include <math.h>
int main(void)
{
    double money = 1000.0, salary[5] = {0.0}, r0 = 0.0035, r1 = 0.015, r2 = 0.021, r3 = 0.0275, r5 = 0.03;
    int i = 0;
    // 一次性存5年期定期存款
    salary[0] = money * (1 + 5 * r5);
    // 先存2年定期存款,再存3年定期存款
    salary[1] = money * (1 + 2 * r2) * (1 + 3 * r3);
    // 先存3年定期存款,再存2年定期存款
    salary[2] = money * (1 + 3 * r3) * (1 + 2 * r2);
    // 连续存5次1年期定期存款
    salary[3] = money * pow((1 + r1), 5);
    // 存5年期活期存款
    salary[4] = money * pow((1 + r0 / 4), 4 * 5);

    printf("一次性存5年期定期存款的本息和: %.4f\n", salary[0]);
    printf("先存2年定期存款,再存3年定期存款的本息和: %.4f\n", salary[1]);
    printf("先存3年定期存款,再存2年定期存款的本息和: %.4f\n", salary[2]);
    printf("连续存5次1年期定期存款的本息和: %.4f\n", salary[3]);
    printf("存5年期活期存款的本息和: %.4f\n", salary[4]);

    return 0;
}