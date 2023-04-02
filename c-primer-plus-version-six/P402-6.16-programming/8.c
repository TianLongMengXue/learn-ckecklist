#include <stdio.h>
int main(void)
{
    double number1 = 0, number2 = 0;
    while(2 == scanf("%lf%lf", &number1, &number2))
        printf("%.3f\n", (number1 - number2)/(number1 * number2));
    return 0;
}