#include <stdio.h>
#include <math.h>
int main(void)
{
    int a, b, c; // 方程 ax^2+bx+c=0 的三个系数
    int delta;
    scanf("%d %d %d", &a, &b, &c);
    delta = pow(b, 2) - 4*a*c;
    if(delta > 0)
    {
        double temp1, temp2;
        temp1 = ( (double)(-b) + sqrt(delta) ) / (double)(2*a);
        temp2 = ( (double)(-b) - sqrt(delta) ) / (double)(2*a);
        printf("%dx^2+%dx+%d=0 有两个不相等的根\n", a, b, c);
        printf("%dx^2+%dx+%d=0 的根为 %.2f, %.2f\n", a, b, c, temp1, temp2);
    }
    else if(0 == delta)
    {
        double temp;
        temp = (double)(-b) / (double)(2*a);
        printf("%dx^2+%dx+%d=0 有两个相等的根\n", a, b, c);
        printf("%dx^2+%dx+%d=0 的根为 %.2f, %.2f\n", a, b, c, temp, temp);
    }
    else if(delta < 0)
    {
        double temp1, temp2;
        temp1 = (double)(-b) / (double)(2*a);
        temp2 = (double)(sqrt(-delta)) / (double)(2*a);
        printf("%dx^2+%dx+%d=0 有一对共轭复根\n", a, b, c);
        printf("%dx^2+%dx+%d=0 的根为 %.2fi+%.2f, %.2fi-%.2f\n", a, b, c, temp1, temp2, temp1, temp2);
    }
    return 0;
}