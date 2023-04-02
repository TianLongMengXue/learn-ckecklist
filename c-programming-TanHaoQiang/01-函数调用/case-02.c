#include <stdio.h>
double area(double x, double y)
{
	double area;
	area = x * y;
	return area;
}
int main(void)
{
	// double area;
	double width, height, result;
	// area = area(12.2, 16);
	// printf("area = %lf\n", area);
	result = area(12.2, 16);
	printf("area = %lf\n", result);

	scanf("%lf %lf", &width, &height);
	printf("area = %lf\n", area(width, height));
	return 0;
}
