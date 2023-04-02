#include <stdio.h>
int main()
{
	short a = 1, b = 1, c = 1, d = 1;
	scanf("%hd %*hd %*hd %hd", &a, &b, &c, &d);
	printf("%hd, %hd, %hd, %hd\n", a, b, c, d);
	return 0;
}
