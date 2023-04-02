#include <stdio.h>
int main(void)
{
	int a = 3, b = 5;
	int *p = &a, *q = &b;
	printf("q - p 没有实际意义!!\n");

	int c[5];
	p = &c[1];
	q = &c[4];
	printf("p和q所指向的存储单元相隔%ld个存储单元\n", (q - p));

	return 0;
}
/*
	q - p 没有实际意义!!
	p和q所指向的存储单元相隔3个存储单元
*/
