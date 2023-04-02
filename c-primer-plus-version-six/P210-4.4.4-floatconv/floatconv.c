#include <stdio.h>
int main(void)
{
	float n1 = 3.0F;
	double n2 = 3.0;
	long n3 = 2000000000L;
	long n4 = 1234567890L;
	printf("%.1e %.1e %.1e %.1e\n", n1, n2, n3, n4);
	printf("%ld %ld\n", n3, n4);
	printf("%ld %ld %ld %ld\n", n1, n2, n3, n4);
	printf("sizeof long = %zd\nsizeof float = %zd\nsizeof double = %zd\n", sizeof(long), sizeof(float), sizeof(double));
	return 0;
}