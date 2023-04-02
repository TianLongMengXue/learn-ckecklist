#include <stdio.h>
int main(void)
{
    double d;
    printf("Enter a floating-point value: ");
    scanf("%lf", &d);
    printf("fixed-point notation: %8.6f\nexponential notation: %e\np notation: %a\n", d, d, d);
    return 0;
}