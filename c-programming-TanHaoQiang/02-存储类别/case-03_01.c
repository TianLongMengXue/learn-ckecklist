#include <stdio.h>
extern a;
void test(void);
int main(void)
{
	printf("a = %d, &a = %#X\n", a, &a);
	test();
	return 0;
}
/*
	a = 100, &a = 0XED809010
	a = 100, &a = 0XED809010
 * */
