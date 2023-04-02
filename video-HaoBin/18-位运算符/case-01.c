#include <stdio.h>
int main()
{
	short i = 0, j = -0, k = 32767, l = 32768;
	short r = k + 1;
	short m = 32769;
	short n = 0x8000;
	printf("%d, %d, %d, %d, %d, %d\n", i, j, k, l, k+1, r);
	printf("%d, %d\n", m, n);
	return 0;
}
