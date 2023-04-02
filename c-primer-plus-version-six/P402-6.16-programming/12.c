#include <stdio.h>
int main(void)
{
    int end = 0, i = 0, flag = 1;
    double sum1 = 0.0, sum2 = 0.0;
    scanf("%d", &end);
    while(end > 0)
    {
        for(i = 1, sum1 = 0.0, sum2 = 0.0, flag = 1; i <= end; ++i)
        {
            sum1 += 1.0 / ((double)i);
            sum2 += flag * (1.0 / ((double)i));
            flag = - flag;
        }
        printf("1.0 + ... + 1.0 / %d = %.6f\n", end, sum1);
        printf("1.0 - ... + 1.0 / %d = %.6f\n", end, sum2);
        scanf("%d", &end);
    }
    return 0;
}