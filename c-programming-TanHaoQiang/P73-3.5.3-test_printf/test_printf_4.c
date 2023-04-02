#include <stdio.h>
int main(void)
{
	float k = 30.0F;
	float l = 40.0F;
	float m = 50.50F;
	float n = 60.0F;
	float o = 70.787F;

	printf("%f, %#f, %f, %#f\n", k, k, -k, -k);
	printf("%e, %E, %e, %E\n", l, l, -l, -l);
	printf("%E, %#E, %E, %#E\n", m, m, -m, -m);
	printf("%g, %G, %g, %G\n", n, n, -n, -n);
	printf("%#g, %#G, %#g, %#G\n", o, o, -o, -o);
	return 0;
}