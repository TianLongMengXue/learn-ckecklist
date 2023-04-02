#include <stdio.h>
#include <math.h>
double cube(double num)
{
	return pow(num, 3);
}
int main(void)
{
	double num;
	scanf("%lf", &num);
	printf("the cube of %.2f is %.2f\n", num, cube(num));
	return 0;
}