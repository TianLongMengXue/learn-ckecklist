#include <stdio.h>
int main(void)
{
    double x = 0, y = 0;
    scanf("%lf", &x);
    if(x < 1)
        y = x;
    else if(x < 10)
        y = 2 * x - 1;
    else
        y = 3 * x - 11;
    printf("y = %.2f\n", y);
    return 0;
}