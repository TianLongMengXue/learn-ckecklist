#include <stdio.h>
#include <float.h>
#include <math.h>
int main(void)
{
	float a = 0.9F, b = 1.0F, c = 2.0F;
    printf("a = %.20lf\nb = %.20lf\nc = %.20lf\n", a, b, c);
    if( fabs(a+0.1-b) > FLT_EPSILON ) printf("a != b\n");
    else printf("a = b\n");
    if( fabs(b-c) > FLT_EPSILON && b > c ) printf("b > c\n");
    else if (fabs(b-c) > FLT_EPSILON && b < c)printf("b < c\n");
	return 0;
}