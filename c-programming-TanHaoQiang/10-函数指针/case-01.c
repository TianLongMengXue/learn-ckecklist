#include <stdio.h>
int sumxy(int, int);
int  factorialx(int);
void result(int (*x)(int), int (*xy)(int, int));
int main(void)
{
	int (*x)(int) = factorialx;
	int (*xy)(int, int) = sumxy;
	
	result(x, xy);

	return 0;
}
int sumxy(int x, int y)
{
	return x+y;
}
int  factorialx(int x)
{
	int factorial = 1;
	for (int i = 2; i <= x; ++i)
	{
		factorial *= i;
	}
	return factorial;
}
void result(int (*x)(int), int (*xy)(int, int))
{
	int a = 10, b = 20, c, d;
	c = (*x)(a);
	d = (*xy)(a, b);

	printf("sum = %d, factorial = %d\n", c, d);
}
/*
	sum = 3628800, factorial = 30
*/
