#include <stdio.h>
#define GALLON_TO_LITRE 3.785
#define MILE_TO_KILOMETER 1.609
int main(void)
{
    double m_g, l_k;
    printf("please input mill/gallon : ");
    scanf("%lf", &m_g);
    l_k = 1.0 / (m_g * (GALLON_TO_LITRE / (MILE_TO_KILOMETER * 100.0)));
    printf("%.1f\n", l_k);
    return 0;
}