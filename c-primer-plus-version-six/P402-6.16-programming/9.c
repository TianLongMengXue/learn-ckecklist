#include <stdio.h>
double calc(double x, double y);
int main(void)
{
    double number1 = 0, number2 = 0;
    while(2 == scanf("%lf%lf", &number1, &number2))
        printf("%.3f\n", calc(number1, number2));
    return 0;
}
double calc(double x, double y)
{
    return (x - y)/(x * y);
}