#include <stdio.h>
int main()
{
	char ch = 'A';
	int a = 10;
	double b = 12;
	char *p = &ch;
	int *q = &a;
	double *r = &b;
	
	printf("%ld %ld %ld\n", sizeof(ch), sizeof(a), sizeof(b));
	
	printf("%ld %ld %ld\n", sizeof(p), sizeof(q), sizeof(r));
	
	return 0;
}
