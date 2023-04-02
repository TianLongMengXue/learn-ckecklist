#include <stdio.h>
int main(void)
{
	short i = 10;
	int j = 20;
	float k = 30.0F;
	float l = 40.0F;
	float m = 50.50F;
	double n = 60;
	double o = 70.787;

	printf("%#o, %#X\n", &i, &j);
	// printf("%#hn, %#ls\n", &i, &j);

	printf("%f, %#f, %E, %#E\n", k, k, k, k);
	printf("%f, %#f, %E, %#E\n", l, l, l, l);
	printf("%f, %#f, %E, %#E\n", m, m, m, m);

	printf("%f, %#f, %E, %#E\n", n, n, n, n);
	printf("%f, %#f, %E, %#E\n", o, o, o, o);

	return 0;
}
/*
	014505673646, 0X651777A8
	30.000000, 30.000000, 3.000000E+01, 3.000000E+01
	40.000000, 40.000000, 4.000000E+01, 4.000000E+01
	50.500000, 50.500000, 5.050000E+01, 5.050000E+01
	60.000000, 60.000000, 6.000000E+01, 6.000000E+01
	70.787000, 70.787000, 7.078700E+01, 7.078700E+01
*/
